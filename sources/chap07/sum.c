#include <stdio.h>

int main(void)
{
	int i, n, sum;		// ���� ����
	
	printf("������ �Է��Ͻÿ�:");	// �Է� �ȳ� �޽��� ���
	scanf("%d", &n);		// ������ �Է�
	
	i = 1;				// ���� �ʱ�ȭ
	sum = 0;

	while(i <= n)
	{
		sum += i;		// sum = sum + i;�� ����.
		i++;			// i = i + 1�� ����. 
	}
	
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	return 0;
}
