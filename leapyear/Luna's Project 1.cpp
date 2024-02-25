#include <iostream>
#include <limits>

int division(int x) //modulo part 1
{
	x = x % 4;
	return x;
}

int hundred(int x) //modulo part 2
{
	x = x % 100;
	return x;
}

int fourhundred(int x) //modulo part 3
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
		std::cout << "Common year \n";

	else if (hundred(year) != 0)
		std::cout << "Leap year \n";

	else if (fourhundred(year) != 0)
		std::cout << "Common year \n";

	else
		std::cout << "Leap year \n";

	//i hate this but you need it to keep the program from closin before it tells you what year type it is!
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get(); 

	return 0;


}