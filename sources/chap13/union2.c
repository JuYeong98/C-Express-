#include <stdio.h>
#include <string.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct  student {
	int type;
	union {
		int stu_number;	// �й�
		char reg_number[15];	// �ֹε�Ϲ�ȣ
	} id;
	char name[20];
};

void print(struct student s)
{
	switch(s.type)
	{
		case STU_NUMBER:
			printf("�й�: %d\n", s.id.stu_number);
			printf("�̸�: %s\n", s.name);
			break;
		case REG_NUMBER:
			printf("�ֹε�Ϲ�ȣ: %d\n", s.id.reg_number);
			printf("�̸�: %s\n", s.name);
			break;
		default:
			printf("Ÿ�Կ���\n");
			break;
	}
}

int main(void)
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20190001;
	strcpy(s1.name, "ȫ�浿");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "860101-1058031");
	strcpy(s2.name, "��ö��");

	print(s1);
	print(s2);

	return 0;		
}
