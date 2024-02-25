#include <iostream>

int division(int x)
{
	x = x % 4;
	return x;
}

int hundred(int x)
{
	x = x % 100;
	return x;
}

int fourhundred(int x)
{
	x = x % 400;
	return x;
}

int main()
{
	std::cout << "Tell me a valid year. ";
	int year{}; //year variable
	std::cin >> year; //assigning the year

	if (division(year) != 0)
		std::cout << "Common year";

	else if (hundred(year) != 0)
		std::cout << "Leap year";

	else if (fourhundred(year) != 0)
		std::cout << "Common year";

	else
		std::cout << "Leap year";

	return 0;


}