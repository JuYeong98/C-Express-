#include <stdio.h>
#include <math.h>	// �̰��� �ݵ�� �����Ͽ��� �Ѵ�. 

int main(void) {
	double result, value = 1.6;

	result = floor(value);		// result�� 1.0�̴�. 
	printf("%lf ", result);
	result = ceil(value);		// result�� 2.0�̴�. 
	printf("%lf ", result);
	return 0;
}