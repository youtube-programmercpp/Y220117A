#include <stdio.h>
int main()
{
	int i = 0;
	i = i + 1;
	i += 1;
	++i;


	unsigned short value = 0x1234;
	printf("%X\n", value >> 8  );
	printf("%X\n", value & 0xff);//˜_—Ï AND
}
