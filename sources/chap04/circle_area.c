/* ���� ������ ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	double radius;		// ���� ������
	double area;		// ���� ����


	printf("���� ������ �Է��Ͻÿ�:");
	scanf("%lf", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ����: %f \n", area);

	return 0;
}