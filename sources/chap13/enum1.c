// ������
#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };

char *days_name[] = { 
"monday", "tuesday", "wednesday", "thursday", "friday",
	"saturday", "sunday" };

int main(void)
{
	enum days d;

	for(d=MON; d<=SUN; d++)
	{
		printf("%d��° ������ �̸��� %s�Դϴ�\n", d, days_name[d]);		}
}



// ������
#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT };

char *days_name[] = { 
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday",
	"saturday"
};

int main(void)
{
	enum days d;
	d=WED;

	printf("%d��° ������ �̸��� %s�Դϴ�\n", d, days_name[d]);		
}
