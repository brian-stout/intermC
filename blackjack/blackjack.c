
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "card.h"
#include "deck.h"
#include "hand.h"

int main(void)
{
	srand(time(NULL));

	struct deck *pile = deck_create();

	struct card **hand = deck_deal(pile, 5);
	hand_print(hand);

	free(hand);
	deck_destroy(pile);
}
