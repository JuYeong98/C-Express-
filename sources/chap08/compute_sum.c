#include <stdio.h>

// �Լ� ����
int compute_sum(int n);

int main(void)
{
	int n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	sum = compute_sum(n);		// �Լ� ���

	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
}

// �Լ� ����
int compute_sum(int n)
{
	int i;
	int result = 0;

	for(i = 1; i <= n; i++)
		result += i;

	return result;
}
