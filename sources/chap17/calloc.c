// 10���� long�� ������ ������ �� �ִ� ������ �Ҵ�޴´�. �ʱⰪ�� ���� 0�� �ȴ�. 
 
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	long *buffer;
	int i;

	buffer = (long *)calloc( 5, sizeof( long ) );
	if( buffer == NULL )
	{
		printf( "�޸� �Ҵ� ����\n" );
		exit(1);
	}
	for(i = 0;i < 5; i++)
		printf("%d\n", buffer[i]);

	free( buffer );
	return 0;
}
