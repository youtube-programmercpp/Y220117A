#include <stdio.h>
void sub(int n)
{
	//
	//	1 を 0 回左にシフト →   00000001(2)→1
	//	1 を 1 回左にシフト →   00000010(2)→2
	//	1 を 2 回左にシフト →   00000100(2)→4
	//	1 を 3 回左にシフト →   00001000(2)→8

	// decimal １０進数
	// binary ２進数
	for (int i = 0;i < n;++i)
		printf("%d\t%d\n", i, 1 << i);
}
int main()
{
	sub(16+1);
}
