#include <iostream>
#include <iomanip>

int main() {
	constexpr int low_border{ 0 };
	constexpr int high_border{ 120 };
	constexpr double young_rate{ 0.5 };
	constexpr double old_rate{ 0.3 };
	constexpr double tuesday_rate{ 0.1 };
	constexpr double weekend_rate{ 0.2 };

	int age{}, weekday{};
	char scr_type{};

	std::cout << "Welcome to the Ticket Office 1.0\n\n";

	std::cout << "Enter your age: ";
	std::cin >> age;
	
	if (std::cin.fail() || age < low_border || age > high_border)
	{
		std::cout << "Error: Invalid age";
		return 1;
	}

	std::cout << "Enter the weekday (number from 1 to 7): ";
	std::cin >> weekday;

	if (std::cin.fail() || weekday < 1 || weekday > 7)
	{
		std::cout << "Error: Invalid weekday";
		return 1;
	}

	std::cout << "Enter the screening type (m, d or e): ";
	std::cin >> scr_type;

	if (std::cin.fail() || scr_type != 'm' || scr_type != 'd' || scr_type != 'e')
	{
		std::cout << "Error: Invalid screening type";
		return 0;
	}
	return 0;
}