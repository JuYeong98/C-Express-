#include <stdio.h>

#define USA
#define DEBUG

#ifndef PI
#define PI 3.141592
#endif

#ifndef SQUARE
#define SQUARE(r)	(r)*(r)
#endif

double area(double radius)
{
	double result=0.0;
#ifdef DEBUG
#ifdef USA
	printf("area(%f) is called \n", radius);
#else
	printf("area(%f)��ȣ��Ǿ���radius);
#endif
#endif
	result = PI*SQUARE(radius);
	return result;
}

int main(void)
{
	double radius;

#ifdef USA
	printf("Please enter radius of a circle(inch) : ");
#else 
	printf("���� �������� �Է��Ͻÿ�");
#endif

	scanf("%lf", &radius);
#ifdef USA
	printf("area of the circle is %f \n", area(radius));
#else
	printf("���� ������ %f�Դϴ�\n", area(radius));
#endif

	return 0;
}