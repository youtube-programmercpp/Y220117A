#include <stdio.h>
void sub(int n)
{
	//
	//	1 �� 0 �񍶂ɃV�t�g ��   00000001(2)��1
	//	1 �� 1 �񍶂ɃV�t�g ��   00000010(2)��2
	//	1 �� 2 �񍶂ɃV�t�g ��   00000100(2)��4
	//	1 �� 3 �񍶂ɃV�t�g ��   00001000(2)��8

	// decimal �P�O�i��
	// binary �Q�i��
	for (int i = 0;i < n;++i)
		printf("%d\t%d\n", i, 1 << i);
}
int main()
{
	sub(16+1);
}
