// break�� �̿��Ͽ� ���ѷ����� Ż���Ѵ�.
#include <stdio.h>
#include <math.h>

int main(void)
{
	double v;

	while(1)
	{
		printf("�Ǽ����� �Է��Ͻÿ�: ");
		scanf("%lf", &v);

		if( v < 0.0 ) 
			break;
		
		printf("%f�� �������� %f�Դϴ�.\n", v, sqrt(v));
	}

	return 0;
}
