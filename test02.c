#include <stdio.h>
int main()
{
	for (int i = 10;i <= 16;++i)
		printf("0x%02X = %d\n", i, i);

	// 0x0A = 10
	// 0x0B = 11
	// 0x0C = 12
	// 0x0D = 13
	// 0x0E = 14
	// 0x0F = 15
	// 0x10 = 16
}
