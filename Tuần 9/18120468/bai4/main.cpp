#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char* argv[]) {
	FILE* p = fopen("file.bin", "wb");
	const char* c = "abcdefghijklmnopqrstuwxyz";
	if (p != NULL) { // mở file thành công
	// ghi c dưới dạng chuỗi byte (char)
		fwrite(c, sizeof(char), sizeof(c), p);
		fclose(p);
	}
}