#include <stdio.h>
#define SIZE 11

int main(void)
{
	int freq[SIZE] = { 0 };		// �󵵸� ��Ÿ���� �迭
	int i, candidate;

	while(1)
	{
		printf("��� �ĺ��ڸ� �����Ͻðڽ��ϱ�?(����-1): ");
		scanf("%d", &candidate);
		if (candidate < 0) break;		//�����̸� �ݺ�����
		freq[candidate]++;			
	}

	printf("��  ��ǥ���\n");

	for(i = 1; i < SIZE; i++)
		printf("%3d     %3d \n", i, freq[i]);

	return 0;
}