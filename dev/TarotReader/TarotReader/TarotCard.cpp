#include "TarotCard.h"
#include "ConsoleColor.h"

#include <iostream>

TarotCard::TarotCard(int number, const std::string& name, const std::string& keywords, const std::string& uprightMeaning, const std::string& reversedMeaning, const std::string& asciiArt)
{
	this->number = number;
	this->name = keywords;
	this->uprightMeaning = uprightMeaning;
	this->reversedMeaning = reversedMeaning;
	this->asciiArt = asciiArt;
}

int TarotCard::GetNumber() const
{
	return number;
}

std::string TarotCard::GetName() const
{
	return name;
}

std::string TarotCard::GetKeywords() const
{
	return keywords;
}

std::string TarotCard::GetUprightMeaning() const
{
	return uprightMeaning;
}
std::string TarotCard::GetReversedMeaning() const
{
	return reversedMeaning;
}
std::string TarotCard::GetAsciiArt() const
{
	return asciiArt;
}

void TarotCard::DisplayCard() const
{
	std::cout << "\n";
	ConsoleColor::Print(asciiArt, ConsoleColor::Ink::Purple);

	std::cout << "\n";

	ConsoleColor::Print("----------------------------------------\n", ConsoleColor::Ink::Purple);

	ConsoleColor::Print(std::to_string(number) + " - " + name + "\n", ConsoleColor::Ink::Purple);
	
	ConsoleColor::Print("----------------------------------------\n", ConsoleColor::Ink::Purple);

	ConsoleColor::Print("Keywords: ", ConsoleColor::Ink::Yellow);
	std::cout << keywords << "\n\n";

	ConsoleColor::Print("Upright Meaning: ", ConsoleColor::Ink::Green);
	std::cout << uprightMeaning << "\n\n";

	ConsoleColor::Print("Reversed Meaning: ", ConsoleColor::Ink::Red);
	std::cout << reversedMeaning << "\n\n";
	
	ConsoleColor::Print("----------------------------------------\n", ConsoleColor::Ink::Purple);

}