#include "rot13.h"
#include "caesar.h"

int encryptROT13(const char* in, char* out)
{
	encryptCaesar(in, out, ROT13);
	return 1;
}

int decryptROT13(const char* in, char* out)
{
	encryptCaesar(in, out, ROT13);
	return 1;
}
