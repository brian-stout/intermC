#ifndef IPV4_H
 #define IPV4_H

struct ipv4{

	unsigned int version:		4;
	unsigned int ihl:			4;
	unsigned int dscp:			6;
	unsigned int ecn:			2;
	unsigned int total_length:	16;
	unsigned int id:			16;
	unsigned int flags:			3;
	unsigned int frag_offset:	13;
	unsigned int ttl:			8;
	unsigned int proto:			8;
	unsigned int checksum:		16;
	unsigned int src:			32;
	unsigned int dst:			32;
};

#endif
