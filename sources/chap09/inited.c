#include <stdio.h>
#include <stdlib.h>

void init();

int main(void)
{
	init();
	init();
	init();
	return 0;
}

void init()
{
	static int inited = 0;
	if( inited == 0 ){
		printf("init(): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�. \n");
		inited = 1;
	}
	else {
		printf("init(): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�. \n");
	}
}