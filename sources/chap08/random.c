// ���� ���� ���α׷�
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// n���� ������ ȭ�鿡 ����Ѵ�. 
void get_random( int n )
{
	int i;
	for( i = 0; i < n; i++ )
		printf( "  %6d\n", rand() );
}

int main( void )
{
	// �Ϲ������� ���� �߻����� �õ�(seed)�� ���� �ð����� �����Ѵ�. 
	// ���� �ð��� ������ ������ �޶����� �����̴�. 
	srand( (unsigned)time( NULL ) );
	get_random( 10 );

	return 0;
}
