// �ݺ����� �ŵ� ������ ���
#include <stdio.h>
double slow_power(int x, int n);

int main(void)
{
	int x, n;
	double f;

	printf("�ΰ��� ������ �Է��Ͻÿ�(��: 2 3): \n");
	scanf("%d %d", &x, &n);

	f = slow_power(x, n);
	printf("%d^%d�� %f�Դϴ�.\n", x, n, f);

	return 0;
}

double slow_power(int x, int n)
{
	int i;
	double result = 1.0;

	for(i = 0; i < n; i++)
		result = result * x;

	return(result);
}
