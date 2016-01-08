#ifndef __ivocipher_module__
#define __ivocipher_module__
#include <string>

char cipher_char(char character, int key);
std::string cipher_word(std::string word);
char decipher_char(char secret_character, int key);
std::string decipher_word(std::string secret_word);

#endif
