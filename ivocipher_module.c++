#include "ivocipher_module.h"
#include <cctype>
#include <string>
#include <iostream>

// function to cipher passed character with specific key
char cipher_char(char character, int key)
{
	// output ciphered character
	char secret_character;

  // turn upper case char into lower case 
	if (isupper(character)) {
		character = int(tolower(character));
	}

  // if a sum of character ord number and key pass beyond alphabet range, then start from the beginning of alphabet
	if (int(character + key) > int('z')) {
		secret_character = key - (int('z') - int(character));
		return int('a') - 1 + secret_character;
	}

  // word is within alphabet range
	else {
		return int(character) + key;
	}
};

// function to cipher passed word
std::string cipher_word(std::string word)
{
  	// return ciphered word
	std::string secret_word = "";

  	// for every letter in word cipher character and put it into a newly created secret word
	for(int i = 0; i < word.length(); i++) {
		secret_word.push_back(cipher_char(word[i], 10));
	}
	
	return secret_word;
};

// function to decipher secret character with key
char decipher_char(char secret_character, int key)
{
	// output deciphered character
	char character;

	// turn upper case char into lower case
	if (isupper(secret_character)) {
		secret_character = tolower(secret_character);
	}

  	// if a sum of character ord number and key pass beyond alphabet range, then start from the beginning of alphabet
	if ((int(secret_character) - key) < int('a')) {
		character = (int('a') - int(secret_character)) + key;
		return char(int('z') + 1 - int(character));
	} 
	else {
		return char(int(secret_character) - key);
	}
	
};

// function to decipher secret word
std::string decipher_word(std::string secret_word)
{
   // return deciphered word
    std::string word = "";

    // for every letter in word decipher character and put it into a newly created word
    for (int i=0; i < secret_word.length(); i++) {
        if (secret_word[i] == ' ') {
            continue;
	}
        word.push_back(decipher_char(secret_word[i], 10));
    }

    return word;

};
