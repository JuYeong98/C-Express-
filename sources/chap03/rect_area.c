#include <stdio.h>

int main(void)
{
	double w;       
	double h;  
	double area;
	double perimeter;

	w = 10.0;
	h = 5.0;
	area = w*h;
	perimeter = 2*(w+h);

	printf("�簢���� ����: %lf\n", area); 	
	printf("�簢���� �ѷ�: %lf\n", perimeter);
	return 0;
}