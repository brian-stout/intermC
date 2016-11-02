#include <stdio.h>

int main(void)
{
	printf("Enter a movie title: ");

	char buf[64];
	fgets(buf, sizeof(buf), stdin);

	printf("%s", buf);
}
