#include <stdio.h>
#include <stdlib.h>

int prod(int, int);
int add(int, int);
int sub(int, int);

int main(void)
{
	printf("%d\n", prod(3, 5));
	printf("%d\n", add(3, 5));
	printf("%d\n", sub(3, 5));

	int value = 0;

	int (*allfuncs[])(int, int) = {prod, add, sub};


	// THREE FUNCTIONS IN THE ARRAY
	for(size_t n = 0; n < 3; ++n){
		int (*curr_func)(int, int);
		curr_func = allfuncs[n];
		value += curr_func(3,5);
	}

	printf("%d\n", value);
}

int prod(int a, int b)
{
	return a * b;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
