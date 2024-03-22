//bai 2
#include <stdio.h>
#include <math.h>

// H�m ki?m tra s? ch�nh phuong
int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

// H�m d?m v� in ra c�c s? ch�nh phuong nh? hon n
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong: %d\n", count);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    countAndPrintPerfectSquares(n); // G?i h�m d? d?m v� in ra c�c s? ch�nh phuong
    return 0;
}

