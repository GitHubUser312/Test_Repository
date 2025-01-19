#include <iostream>

int main()
{
	char character;
	char lowercase_character;

	std::cout << "Enter a character: ";
	std::cin >> character;

	lowercase_character = tolower(character);

	if (character == lowercase_character)
	{
		std::cout << "Lower Case!";
	}
	else
	{
		std::cout << "Non Lower Case!";
	}

	return 0;
}