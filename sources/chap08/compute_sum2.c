#include <stdio.h>

int compute_sum(int n)
{
	int i, result = 0;
	for(i = 1; i <= n; i++)
		result += i;
	return result;
}
int main(void)
{
	int sum;
	int n = 100;
	sum = compute_sum(n);
	printf("1���� %d������ ���� %d�Դϴ�.  \n", n, sum);
	return 0;
}
