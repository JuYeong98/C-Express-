//  �ݺ��� �̿��� ������ ���α׷�
#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;	
	for(i = 1;i <= 10; i++)		// i�� 1���� 10���� ����
		sum += i;			// sum = sum + i;�� ����

	printf("1���� 10������ ������ ��= %d\n",sum);

	return 0;
}
