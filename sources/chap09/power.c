// �ݺ����� �ŵ� ������ ���
#include <stdio.h>
double power(int x, int n);

int main(void)
{
	int x, n;
	double f;

	printf("�ΰ��� ������ �Է��Ͻÿ�(��: 2 3): \n");
	scanf("%d %d", &x, &n);

	f = power(x, n);
	printf("%d^%d�� %f�Դϴ�.\n", x, n, f);

	return 0;
}

double power(int x, int n)
{
	if( n == 0 ) 
		return 1;
	else if ( n%2 == 0 ) 
		return power(x*x, n/2);
	else 
		return x*power(x*x, (n-1)/2);
}
