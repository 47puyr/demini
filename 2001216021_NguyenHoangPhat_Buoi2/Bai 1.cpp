//bai 1
#include <stdio.h>

// Hàm ki?m tra xem m?t s? có ph?i là b?i c?a 7 hay không
int isMultipleOf7(int num) {
    return (num % 7 == 0);
}

// Hàm xu?t các s? nguyên có 2 ch? s? và là b?i c?a 7
void printMultiplesOf7() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    for (int i = 10; i < 100; i++) {
        if (isMultipleOf7(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printMultiplesOf7(); // G?i hàm d? xu?t các s? nguyên có 2 ch? s? và là b?i c?a 7
    return 0;
}

