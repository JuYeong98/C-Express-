#include <stdio.h>

// amount�� ����̸� �Ա��̰� �����̸� ������� �����Ѵ�. 
void save(int amount)
{
	static long balance = 0;

	if( amount >= 0)
		printf("%d \t\t", amount);
	else
		printf("\t %d \t", -amount);

	balance += amount;
	printf("%d \n", balance);
}

int main(void) {
	printf("==============================\n");
	printf("�Ա� \t���\t �ܰ�\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}