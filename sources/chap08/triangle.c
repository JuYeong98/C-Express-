#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (45.0/atan(1))

int main(void)
{
	double w, h, r, theta;

	printf("�غ��� ���̸� �Է��Ͻÿ�:");
	scanf("%lf %lf", &w, &h);

	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);

	printf("����= %f ����= %f\n", r, theta);
}
