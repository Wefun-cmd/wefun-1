#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);
	fputc('d', pf);
	fseek(pf, -3, SEEK_CUR);
	fputc('w', pf);

	long pos = ftell(pf);//当前位置相对于起始位置偏移量
	printf("%ld\n", pos);
	rewind(pf);
	pos = ftell(pf);
	printf("%ld\n", pos);
	fclose(pf);
	pf = NULL;
	return 0;
}