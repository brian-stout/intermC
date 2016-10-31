#include <stdio.h>

int array[1000];

void put(int value, int position)
{
	array[position] = value;
}

int get(int position)
{
	return array[position];
}
