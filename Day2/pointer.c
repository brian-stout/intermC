#include <stdio.h>

void find_negs(double *start, double *limit);
int main(void)
{

	//Still not very dynamic
	double input[] = {8.1, -7, 0, -3.1, 88, 9.12, 87.5, 3.3, -4000, 2000, -20, -30};
	double *end;
	//implicit compile time cost.  Points automatically scale values to the size of 	//things they are pointing at.
	end = input + 12;


	//sizeof(input)/sizeof(input[0]) gives you the amount of things in it
	//Will do better shit later
	find_negs(input, end);
}

void find_negs(double *start, double *limit)
{
	if(!start){
		return;
	}
	//It doesn't increment by one, it increments by the size of the thing we're 
	//pointing at
	while(start < limit){
		//*(start + n) == start[n]
		if(*start < 0){
			printf("Found %lf\n", *start);
		}
		++start;
	}
}

/*

void find_negs(double *start, double *limit)
{
	if(!start){
		return;
	}
	//It doesn't increment by one, it increments by the size of the thing we're 
	//pointing at
	for(; start < limit; ++start){
		//*(start + n) == start[n]
		if(*start < 0){
			printf("Found %lf\n", *start);
		}
	}
}


*/
