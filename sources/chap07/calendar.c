// �޷� ���
#include <stdio.h>

#define START_DAY 		3	// ù��° ���� ������
#define DAYS_OF_MONTH	31 	// ���� �ϼ�

int main(void)
{
	int day, date;

	printf("=====================\n");
	printf("�� �� ȭ �� �� �� ��\n");
	printf("=====================\n");

	for(day = 0; day < START_DAY ; day++)	// �����Ϻ��� �����ϱ��� 
		printf("   ");			// ���� ���

	for(date = 1; date <= DAYS_OF_MONTH ; date++)
	{
		if( day == 7 )
		{
			day = 0;	// �Ͽ����̸� �ٹٲ��� ���
			printf("\n");
		}
		day++;
		printf("%2d ", date);		// ���� ����Ѵ�. 
	}
	printf("\n=====================\n");
	
	return 0;
}

