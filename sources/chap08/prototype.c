#include <stdio.h>
double c_to_f(double c_temp); 	// �Լ� ����

int main(void)
{
	printf("���� %lf���� ȭ�� %lf�Դϴ�.  \n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
