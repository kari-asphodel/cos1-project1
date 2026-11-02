#include "Input.h"
#include "ConsoleColor.h"

#include <iostream>
#include <stdexcept>
#include <string>

int Input::GetNumber(const std::string& prompt, int min, int max)
{
	while (true)
	{
		ConsoleColor::Print(prompt, ConsoleColor::Ink::Yellow);

		std::string input;
		std::getline(std::cin, input);

		try // try the risky code
		{
			int number = std::stoi(input);
			if (number >= min && number <= max)
			{
				return number;
			}
			ConsoleColor::Print("That number is outside the available choices.\n", ConsoleColor::Ink::Red);
		}
		catch (const std::invalid_argument) // means string could not be converted
		{
			ConsoleColor::Print("The cards require a number, mortal.\n", ConsoleColor::Ink::Red);
		}
		catch (const std::out_of_range&) // means number is outside the range an int can store
		{
			ConsoleColor::Print("That number is far too powerful for this menu.\n", ConsoleColor::Ink::Red);
		}
	}
}

std::string Input::GetString(const std::string& prompt)
{
	while (true)
	{
		ConsoleColor::Print(prompt, ConsoleColor::Ink::Yellow);

		std::string input;
		std::getline(std::cin, input);

		if (!input.empty())
		{
			return input;
		}
		ConsoleColor::Print("The void cannot answer an empty question.\n", ConsoleColor::Ink::Red);
	}
}