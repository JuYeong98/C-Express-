// �������ڰ��
#include <stdio.h>

#define RATE 0.07			// ����
#define INVESTMENT	10000000 	// �ʱ� ���ڱ�
#define YEARS		10 		// ���� �Ⱓ

int main(void)
{
	int i;
	double total = INVESTMENT;	// ������ �հ�

	printf("==============\n");
	printf("����  ������\n");
	printf("==============\n");

	for(i = 1; i <= YEARS; i++)
	{
		total = total * ( 1 + RATE );	// ���ο� ������ ���
		printf("%2d	%10.1f\n", i, total);	
	}

	return 0;
}
