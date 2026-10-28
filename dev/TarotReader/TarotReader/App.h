#pragma once
#include "TarotDeck.h"
// responsible for menu and user input
class App
{
public:
	App();
	void Run();
private:
	TarotDeck deck;

	void DisplayMenu() const;
	void DrawCard();
	void BrowseCards();
	void DisplayAbout() const;
	void DisplayWelcome() const;
};

