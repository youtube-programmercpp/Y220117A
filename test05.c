#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	//�_����
	if ((printf("n = "), scanf("%d", &n), n) & 1) {
		//�
		printf("Odd\n");
	}
	else {
		//����
		printf("Even\n");
	}
}
