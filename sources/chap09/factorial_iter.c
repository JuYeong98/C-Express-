// �ݺ����� ���丮�� �Լ� ���
#include <stdio.h>
long factorial_iter(int n);

int main(void)
{
	int x;
	long f;

	printf("������ �Է��Ͻÿ�: \n");
	scanf("%d", &x);

	f = factorial_iter(x);
	printf("%d!�� %d�Դϴ�.\n", x, f);

	return 0;
}

long factorial_iter(int n)
{
	long result;

	for(result = 1; n > 1; n--)
		result *= n;

	return result;
}
