// �ҹ��ڸ� �빮�ڷ� �����Ѵ�.
#include <stdio.h>

int main(void)
{
	char letter;

	while(1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf(" %c", &letter);	// ���� ���� ����

		if( letter == 'Q' ) 
			break;
		if( letter < 'a' || letter > 'z' )
			continue;

		letter -= 32;			// �ҹ��� -> �빮��
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}

	return 0;
}
