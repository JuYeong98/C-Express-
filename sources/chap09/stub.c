#include <stdio.h>
double get_pc_temp();

int main(void)
{
	double temperature;
	temperature = get_pc_temp();
	if( temperature >= 50 ) 
		printf("�����Ǿ����ϴ�\n");
	return 0;
}
double get_pc_temp()
{
	printf("get_pc_temp()�� ȣ��Ǿ����ϴ�.\n");
	return 49.0;
}