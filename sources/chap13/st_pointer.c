#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
}; 

int main(void)
{
	struct date d = { 3, 20, 1980 };
	struct student s = { 20190001, "Kim", 4.3 };

	s.dob = &d;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}