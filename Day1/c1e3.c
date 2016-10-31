#include <stdio.h>


struct full_name{
	char first_name[8];
	char last_name[8];
	char initial[2];
};

struct dates{
	unsigned int day: 32;
	unsigned int month: 12;
	unsigned int year: 2016;
};

union birth{
	char buf[128];
	long int day;

};

int main(void)
{

}
