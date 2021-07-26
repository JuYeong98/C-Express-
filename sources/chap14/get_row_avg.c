double get_row_avg(int m[][COLS], int r)
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[r][0];			// p�� r���� ���� �ּ�
	endp = &m[r][COLS-1];	// endp�� r���� ���� �ּ�

	while( p <= endp )		// p�� ���� �ּҺ��� �۰ų� ������
		sum += *p++;		// sum�� p�� ����Ű�� �� ����

	sum /= COLS;			// ��� ���

	return sum;
}