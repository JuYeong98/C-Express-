#include <stdio.h>
 
int main()
{
       int x, y, result;
 
       printf("�ΰ��� ������ �Է��Ͻÿ�: ");
       scanf("%d %d", &x, &y);
       
       result = x + y;		// ���� ������ �Ͽ��� ����� result�� ����
       printf("%d + %d = %d\n", x, y, result);
 
       result = x - y;		// ���� ����
       printf("%d - %d = %d\n", x, y, result);
 
       result = x * y;		// ���� ����

       printf("%d + %d = %d\n", x, y, result);
 

       result = x / y;		// ������ ����
       printf("%d / %d = %d\n", x, y, result);
 
       result = x % y;		// ������ ����
       printf("%d %% %d = %d\n", x, y, result);
       return 0;
}