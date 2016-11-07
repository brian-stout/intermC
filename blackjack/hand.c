
#include "hand.h"

#include <stdio.h>

void hand_print(struct card *hand[])
{
	if(!hand) {
		return;
	}

	char buf[CARD_BUF_SZ];

	while(*hand) {
		card_format(buf, sizeof(buf), **hand);
		puts(buf);
		++hand;
	}
}
