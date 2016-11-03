#include <stdio.h>
#include "ipv4.h"

int main(void)
{
	struct ipv4 muh_packet;
	muh_packet.ttl = 230;
	printf("sizeof(muh_packet) = %zd\n", sizeof(muh_packet));
	printf("muh_packet.ttl = %d\n", muh_packet.ttl);
}
