#include <stdio.h>

int main(void)
{
	char c;
	char s[80], t[80];

	printf("�����̽��� �и��� ���ڿ��� �Է��Ͻÿ�:");
	scanf("%s%c%s", s, &c, t);

	printf("�Էµ� ù��° ���ڿ�=%s\n", s);
	printf("�Էµ� ����=%c\n", c);
	printf("�Էµ� �ι�° ���ڿ�=%s\n", t);

	return 0;
}