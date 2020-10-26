#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	FILE *fin;
	int c;
	char ch;
	if ((fin = fopen("file1.txt", "r")) == NULL) {
		printf("Cannot open input file\n");
		exit(1);
	}
	printf("Contents of file1.txt:\n");
	while ((ch=fgetc(fin))!=EOF) {
		c = fgetc(fin);
		printf("%c", c);
	}
	fclose(fin);
	_getch();
	exit(0);
}