#include "SerialPC.hpp"

/////////////////////////////////////////////////////////
//// GESTION DE LA COMMUNICATION AVEC LE PORT SERIAL ////
/////////////////////////////////////////////////////////

HANDLE port = initPort(); // Création du port dans une variable global pour pas avoir à le mettre en parametre des différentes fonction (ca poserait problème que les parametres sois différent pour les fonctions arduino et PC)

HANDLE initPort()
{
    const char* device = "\\\\.\\COM6"; // Définition du port utilisé
    uint32_t baud_rate = 9600; // Définition du débits en bauds utilisé
    HANDLE port = open_serial_port(device, baud_rate); 
    return port;
}


void print_error(const char * context)
{
    DWORD error_code = GetLastError();
    char buffer[256];
    DWORD size = FormatMessageA(
        FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_MAX_WIDTH_MASK,
        NULL, error_code, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US),
        buffer, sizeof(buffer), NULL);
    if (size == 0) { buffer[0] = 0; }
    fprintf(stderr, "%s: %s\n", context, buffer);
}

// Opens the specified serial port, configures its timeouts, and sets its
// baud rate.  Returns a handle on success, or INVALID_HANDLE_VALUE on failure.
HANDLE open_serial_port(const char * device, uint32_t baud_rate)
{
    HANDLE port = CreateFileA(device, GENERIC_READ | GENERIC_WRITE, 0, NULL,
                              OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (port == INVALID_HANDLE_VALUE)
    {
        print_error(device);
        exit(1); // Arrete le programme en cas de problème de port
        return INVALID_HANDLE_VALUE;
    }

    // Flush away any bytes previously read or written.
    BOOL success = FlushFileBuffers(port);
    if (!success)
    {
        print_error("Failed to flush serial port");
        CloseHandle(port);
        exit(1); // Arrete le programme en cas de problème de port
        return INVALID_HANDLE_VALUE;
    }

    // Configure read and write operations to time out after 100 ms.
    COMMTIMEOUTS timeouts = {0};
    timeouts.ReadIntervalTimeout = 0;
    timeouts.ReadTotalTimeoutConstant = 100;
    timeouts.ReadTotalTimeoutMultiplier = 0;
    timeouts.WriteTotalTimeoutConstant = 100;
    timeouts.WriteTotalTimeoutMultiplier = 0;

    success = SetCommTimeouts(port, &timeouts);
    if (!success)
    {
        print_error("Failed to set serial timeouts");
        CloseHandle(port);
        exit(1); // Arrete le programme en cas de problème de port
        return INVALID_HANDLE_VALUE;
    }

    // Set the baud rate and other options.
    DCB state = {0};
    state.DCBlength = sizeof(DCB);
    state.BaudRate = baud_rate;
    state.ByteSize = 8;
    state.Parity = NOPARITY;
    state.StopBits = ONESTOPBIT;
    success = SetCommState(port, &state);
    if (!success)
    {
        print_error("Failed to set serial settings");
        CloseHandle(port);
        exit(1); // Arrete le programme en cas de problème de port
        return INVALID_HANDLE_VALUE;
    }

    return port;
}

// Writes bytes to the serial port, returning 0 on success and -1 on failure.
int write_port(const char* command, long long taille)
{
    // Conversion des parametres, le choix du type des parametres de la fonctions ont été fait pour que la fonction arduino et PC puissent prendre les meme parametres
    uint8_t* Msg = (uint8_t*)command;
    size_t size = taille;
    uint8_t * buffer = Msg;


    DWORD written;
    BOOL success = WriteFile(port, buffer, size, &written, NULL);
    if (!success)
    {
        print_error("Failed to write to port");
        return -1;
    }
    if (written != size)
    {
        print_error("Failed to write all bytes to port");
        return -1;
    }
    return 0;
}

void closeHandle() {
    CloseHandle(port);
}
