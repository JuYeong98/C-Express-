#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, dis;

	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if( a == 0 ) 
		printf("�������� ���� %f�Դϴ�.", -c/b);
	else
	{
		dis = sqrt(b*b - 4.0*a*c);
		if( dis >= 0 )
		{
			printf("�������� ���� %f�Դϴ�.\n", (-b+dis)/(2.0*a));
			printf("�������� ���� %f�Դϴ�.\n", (-b-dis)/(2.0*a));
		}
		else 
			printf("�Ǳ��� �������� �ʽ��ϴ�\n");
	}
	return 0;
}