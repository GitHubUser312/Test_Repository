#include <iostream>

int main()
{
	std::string password;
	std::string Correctpassword = "Password123";

	std::cout << "Enter a password: ";
	std::cin >> password;

	if (password == Correctpassword)
	{
		std::cout << "Access granted!";
	}
	else
	{
		std::cout << "Access denied!";
	}

	return 0;
}