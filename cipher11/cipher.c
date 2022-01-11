#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caesar.h"
#include "rot13.h"

#define CAESAR_SHIFT  3

int main(void)
{
	char in[100] = "the QUICK brown FOX jumps over THE lazy DOG";
	char encrypted[100];
	char decrypted[100];

	printf("Caesar cipher (shift %d) :\n", CAESAR_SHIFT);
	encryptCaesar(in, encrypted, CAESAR_SHIFT);
	printf("Original: %s\nencrypted: %s\n", in, encrypted);
	decryptCaesar(encrypted, decrypted, CAESAR_SHIFT);
	printf("decrypted: %s\n", decrypted);
	printf("\n");

	strcpy(encrypted,"");
	strcpy(decrypted,"");
	printf("ROT13:\n");
	encryptROT13(in, encrypted);
	printf("Original: %s\nencrypted: %s\n", in, encrypted);
	decryptROT13(encrypted, decrypted);
	printf("decrypted: %s\n", decrypted);
	printf("\n");

	return EXIT_SUCCESS;
}
