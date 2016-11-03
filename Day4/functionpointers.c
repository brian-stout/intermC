#include <stdio.h>

int prod(int, int);
int add(int, int);
int sub(int, int);

int main(void)
{
	printf("%d\n", prod(3, 5));
	printf("%d\n", add(3, 5));
	printf("%d\n", sub(3, 5));

	int (*arbitrary_func)(int, int);

	arbitrary_func = prod;

	int value = arbitrary_func(3, 5);

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
