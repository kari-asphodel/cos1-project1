#pragma once
#include "TarotDeck.h"
#include "TarotReading.h"
// responsible for menu and user input
class App
{
public:
	App();
	void Run();
private:
	TarotDeck deck;
	TarotReading readings;

	void DisplayWelcome() const;
	void DisplayMenu() const;
	void BrowseCards();
	void DisplayAbout() const;
};

