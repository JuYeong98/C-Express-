// main �Լ��� �μ� Ȱ��
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double mile, km;

	if( argc != 2 ){
		printf("��� ���: mile2km �Ÿ�\n");
		return 1;
	}
	
	mile = atof(argv[1]);
	km = 1.609 * mile;
	printf("�Էµ� �Ÿ��� %f km�Դϴ�. \n", km);
	
	return 0;
}
