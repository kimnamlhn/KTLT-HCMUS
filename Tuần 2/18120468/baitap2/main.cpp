#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
int main() {
	// Hàm khởi tạo ngẫu nhiên
	srand(time(NULL));
	// Đọc số lượng phần tử của mảng và lưu vào n1
	printf("Enter original array size:");
	int n1 = 0;
	scanf_s("%d", &n1);
	// Khởi tạo động mảng a1 có n1 phần tử kiểu int
	int* a1 = NULL;/* Bổ sung */
	a1 = new int[n1];
		int i;
	for (i = 0; i < n1; i++) {
		// Gán các phần tử trong mảng bằng 100
		/* Bổ sung */
		a1[i] = 100;
			// Xuất các phần tử trong mảng ra màn hình
			printf("%d ", a1[i]/* Bổ sung */);
	}
	// Đọc số lượng phần tử (mới) của mảng, lưu vào n2
	printf("\nEnter new array size: ");
	int n2 = 0;
	scanf_s("%d", &n2);
	// Cấp phát lại số lượng phần tử của a1
	a1 = new int[n2];/* Bổ sung */
	// Nếu có nhiều phần tử hơn ban đầu, gán các phần
	// tử mới bằng 0. Lý do, không muốn sử dụng
	// các phần tử có giá trị rác.
	/* Bổ
	sung
	*/
	for (i = 0; i < n2; i++) {
		a1[i] = 100;
	}
	if (n2 > n1)
	{
		for (int j = n1;j < n2;j++)
			a1[j] = 0;
	}
		for (i = 0; i < n2;i++) {
			// Xuất các phần tử của mảng ra màn hình
			printf("%d ",a1[i]/* Bổ sung */);
		}
	printf("\n");
	// Kết thúc chương trình
	delete[] a1;
	_getch();
	return 0;
}