#include <stdio.h>
#define SIZE 7


void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 } ;

	print_array(list, SIZE);	
	square_array(list, SIZE);	// �迭�� ������ ���޵ȴ�.
	print_array(list, SIZE);	

	return 0;
}
// a[]�� �����ϸ� ������ ����ȴ�. 
void square_array(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++)
		a[i] = a[i] * a[i];

}
// �迭 ���ҵ��� ȭ�鿡 ����Ѵ�. 
void print_array(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++)
		printf("%3d ", a[i]);
	printf("\n");
}