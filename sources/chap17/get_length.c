int get_length(NODE *plist)
{
	NODE *p;
	int length = 0;

	p = plist;

	while( p )
	{
		length++;
		p = p->link;
	} 
	printf("����Ʈ�� ���̴� %d\n", length);
	return length;
}