#include <stdio.h>

enum tvtype { tube, lcd, plasma, projection };

int main(void)
{
	enum tvtype type;

	printf("TV ���� �ڵ带 �Է��Ͻÿ�: ");
	scanf("%d", &type);

	switch(type)
	{
		case tube:
			printf("����� TV�� �����ϼ̽��ϴ�.\n");
			break;
		case lcd:
			printf("LCD TV�� �����ϼ̽��ϴ�.\n");
			break;
		case plasma:
			printf("PDP TV�� �����ϼ̽��ϴ�.\n");
			break;
		case projection:
			printf("�������� TV�� �����ϼ̽��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n");
			break;
	}

	return 0;
}
