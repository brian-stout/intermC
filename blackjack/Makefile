CPPFLAGS+=-Wall -Wextra -Wpedantic
CPPFLAGS+=-Wwrite-strings -Wstack-usage=1024 -Wfloat-equal
CPPFLAGS+=-Waggregate-return -Winline

CFLAGS+=-std=c11

BIN=blackjack
OBJS=blackjack.o card.o deck.o hand.o

.PHONY: clean debug

$(BIN): $(OBJS)

debug: CFLAGS+=-g
debug: $(BIN)

clean:
	$(RM) $(OBJS) $(BIN)
