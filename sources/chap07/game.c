#include <stdio.h>
 
int main(void)
{
       int answer =59;     // ����
       int guess;
       int tries = 0;

	   // �ݺ� ����
       do {
             printf("������ �����Ͽ� ���ÿ�: ");
             scanf("%d", &guess);
             tries++;
             
             if (guess >answer)  // ����ڰ� �Է��� ������ ���亸�� ������
                    printf("������ ������ �����ϴ�.\n");
             if (guess <answer)  // ����ڰ� �Է��� ������ ���亸�� ������
                    printf("������ ������ �����ϴ�.\n");
       } while (guess !=answer);
       
       printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
       return 0;
}