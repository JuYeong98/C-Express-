// ������ ������ ���α׷�
#include <stdio.h>
#define SEC_PER_MINUTE 60	// 1���� 60��

int main(void)
{
	int input, minute, second;

	printf("�ʴ����� �ð��� �Է��Ͻÿ�:(32��������) ");
	scanf("%d", &input);		// �ʴ����� �ð��� �д´�.
	
	minute = input / SEC_PER_MINUTE;	// �� ��
	second = input % SEC_PER_MINUTE;	// �� ��

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, minute, second);
	return 0;
}
