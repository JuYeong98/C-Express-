#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;			// �ִ밪���� �ʱ�ȭ�Ѵ�.
	unsigned short u_money = USHRT_MAX; 	// �ִ밪���� �ʱ�ȭ�Ѵ�.
	
	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);
	
	u_money = u_money + 1;
	printf("u_money = %d\n", u_money);
	
	return 0;
}