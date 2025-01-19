#include <iostream>

int main()
{
	int number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number % 3 == 0 && number % 7 == 0)
	{
		std::cout << "It's divisible!";
	}
	else
	{
		std::cout << "It's not divisible!";
	}

	return 0;
}