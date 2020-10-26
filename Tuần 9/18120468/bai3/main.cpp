#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *f;
	char c;
	int count = 0;
	if ((f = fopen("sao.txt", "r")) == NULL)
	{
		printf("Cannot open output file\n");
		return 0;
	}
	while ((c = fgetc(f)) != EOF)
	{
		count++;
	}
	fclose(f);
	return count;

}