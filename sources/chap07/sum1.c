// while ���� �̿��� �հ� ���α׷�
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;				// ���� �ʱ�ȭ
	sum = 0;			// ���� �ʱ�ȭ
	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum = sum + n;	// sum += n;�� ����.
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);
	
	return 0;
}
