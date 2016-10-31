#include <stdio.h>
#include <string.h>
#include "putget.h"

int main(void)
{
	int input[32];
	int position = 0;

	printf("Please enter a number: ");
	while(1){
		if(scanf("%d", input) == 0){
			break;
		}
		int a = input[0];
		put(a, position);
		++position;
	}
	for(int i = position-1; i >= 0; --i){
		printf("%d\n", get(i));
	}

}
