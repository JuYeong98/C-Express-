// strcmp() �Լ�
#include <string.h>
#include <stdio.h>

int main( void )
{
	char s1[80];	// ù��° �ܾ ������ ���ڹ迭
	char s2[80];	// �ι�° �ܾ ������ ���ڹ迭
	int result;

	printf("ù��° �ܾ �Է��Ͻÿ�:");
	scanf("%s", s1);
	printf("�ι�° �ܾ �Է��Ͻÿ�:");
	scanf("%s", s2);

	result = strcmp(s1, s2);
	if( result < 0 )
		printf("%s�� %s���� �տ� �����ϴ�.\n", s1, s2);
	else if( result == 0 )
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	else 
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);
	return 0;
}
