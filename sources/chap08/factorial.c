#include <stdio.h>

int factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;		// result = result * i
	return result;
}

int main(void)
{
	int n;
	printf("�˰� ���� ���丮���� ����? ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
	return 0;
}