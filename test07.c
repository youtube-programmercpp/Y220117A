#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	if (scanf("%d", &n) == 1) {
		printf("%d �����͂���܂����B\n", n);
	}
	else {
		printf("���̓G���[���������܂����B\n");
	}
	double d;

	//scanf "%f" �� float �p
	//scanf "%lf" �� double �p
	//printf "%f" �� double �p �ifloat �p�͑��݂��Ȃ��j

	//lond float �̗�
	if (scanf("%lf", &d) == 1) {
		printf("%f�����͂���܂����B\n", d);
	}
}
