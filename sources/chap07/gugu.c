// while ���� �̿��� ������ ��� ���α׷�
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("����ϰ� ���� ��: ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d*%d = %d \n", n, i, n*i);
		i++;
	}
		
	return 0;
}
