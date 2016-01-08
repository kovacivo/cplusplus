#include <iostream>
#include "ivocipher_module.h"

int main()
{
	// this program wants to test caesar cipher
	std::cout << "Sample cipher/decipher program to test crypto functions for Caesar cipher." << std::endl;
	std::cout << "The key used is of value: 10." << std::endl;
	std::cout << std::endl;

	std::cout << "Cipher letter 's' to get: " << cipher_char('s', 10) << std::endl;
	std::cout << "Decipher letter 'c' to get: " << decipher_char('c',10) << std::endl;
	std::cout << " ------------------------- " << std::endl;

	std::cout << "Cipher word 'hello' to get: " << cipher_word("hello") << std::endl;
	std::cout << "Decipher word 'rovvy' to get: " << decipher_word("rovvy") << std::endl;

	std::cout << " ------------------------- " << std::endl;
	std::cout << "Try it out together - using two function at once - for character first: " << decipher_char(cipher_char('e',10), 10) << std::endl;
	std::cout << "Try it out together - using two function at once - for word then: " << decipher_word(cipher_word("este")) << std::endl;

	return 0;
}
