#include <stdio.h>
static void f1()
{
	printf("f1()�� ȣ��Ǿ����ϴ�.\n");
}

void f2()
{
	f1();
	printf("f2()�� ȣ��Ǿ����ϴ�.\n");
}
