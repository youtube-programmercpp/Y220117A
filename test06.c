#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	while ((printf("n = "), scanf("%d", &n), n) > 0) {
		printf("n �� %d�ł��B\n", n);
	}
}
