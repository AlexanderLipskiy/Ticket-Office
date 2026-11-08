#include <iostream>
#include <iomanip>

int main() {
	constexpr int low_border{ 0 };
	constexpr int high_border{ 120 };
	constexpr int young_rate{ 50 };
	constexpr int old_rate{ 70 };
	constexpr int tuesday_rate{ 90 };
	constexpr int weekend_rate{ 120 };

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

	if (std::cin.fail())
	{
		std::cout << "Error: Invalid screening type";
		return 1;
	}

	int total_price{};

	switch (scr_type)
	{
		case 'm':
			total_price = 25000;
			break;
		case 'd':
			total_price = 35000;
			break;
		case 'e':
			total_price = 45000;
			break;
		default:
			std::cout << "Error: Invalid screening type";
			return 1;
	}

	if (age <= 5)
	{
		total_price = 0;
	}
	else if (age <= 17)
	{
		total_price = total_price * young_rate / 100;
	}
	else if (age >= 65)
	{
		total_price = total_price * old_rate / 100;
	}

	if (total_price != 0)
	{
		switch (weekday)
		{
			case 2:
				total_price = total_price * tuesday_rate / 100;
				break;
			case 6:
			case 7:
				total_price = total_price * weekend_rate / 100;
				break;
		}
	}
	std::cout << total_price;
	return 0;
}