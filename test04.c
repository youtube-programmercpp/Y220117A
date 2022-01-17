#include <stdio.h>
int main()
{
	int a = (1, 2, 3, 4, 5);
	int b;
	b = (1, 2, 3, 4, 5, 6, 7);
	//precedence —Dæ‡ˆÊ
	//‘ã“ü‰‰Zq assignment operator
	//ƒRƒ“ƒ}‰‰Zq comma operator

	int i = 0, j = 0;
	for (; i < 10; ++i, j += 3) {
		printf("i = %d, j = %d\n", i, j);
	}
}
