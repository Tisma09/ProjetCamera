#include "SerialArduino.hpp"

int write_port(const char* buffer, long long taile)//, size_t size)
{
  Serial1.write(buffer);
	return 0;
}
