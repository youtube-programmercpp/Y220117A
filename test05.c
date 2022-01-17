#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	//˜_—Ï
	if ((printf("n = "), scanf("%d", &n), n) & 1) {
		//Šï”
		printf("Odd\n");
	}
	else {
		//‹ô”
		printf("Even\n");
	}
}
