#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


int main()
{
	FILE *fout;
	int c;
	if ((fout = fopen("file1.txt", "w")) == NULL)
	{
		printf("Cannot open output file\n");
		return 1;
	}
	printf("Input string\n");
	//Voi Windows ta cung Ctrl-z de thoat.
	//Voi Linux ta se dung lenh Ctrl + C de thoat 
	printf("Ctrl-z if you want to exit\n");
	printf("With Linux if you want to exit press Ctrl + C\n");
	while ((c = getchar()) != EOF)
	{
		putc(c, fout);
	}
	fclose(fout);
	return 0;
}