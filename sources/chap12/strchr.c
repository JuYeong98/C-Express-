#include <string.h>
#include <stdio.h>

int main( void )
{
	char s[] = "language";	 

	char c = 'g';
	char *p;
	int loc;

	p = strchr(s, c);
	loc = (int)(p - s);

	if ( p != NULL )
		printf( "ù��° %c�� %d���� �߰ߵǾ���\n", c, loc );
	else
		printf( "%c�� �߰ߵ��� �ʾ���\n", c );
}