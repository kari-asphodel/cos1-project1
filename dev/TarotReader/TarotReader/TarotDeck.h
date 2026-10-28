#pragma once
#include <vector>
#include "TarotCard.h"
// collection of tarot card objects
class TarotDeck
{
public:
	TarotDeck();

	void DisplayDeck() const;
	void DisplayCard(int index) const;
	void DrawCard() const;
private:
	std::vector<TarotCard> cards;

	void CreateDeck();
};


