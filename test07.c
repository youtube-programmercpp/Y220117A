#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	if (scanf("%d", &n) == 1) {
		printf("%d が入力されました。\n", n);
	}
	else {
		printf("入力エラーが発生しました。\n");
	}
	double d;

	//scanf "%f" は float 用
	//scanf "%lf" は double 用
	//printf "%f" は double 用 （float 用は存在しない）

	//lond float の略
	if (scanf("%lf", &d) == 1) {
		printf("%fが入力されました。\n", d);
	}
}
