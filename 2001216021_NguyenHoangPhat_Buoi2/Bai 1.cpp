//bai 1
#include <stdio.h>

// H�m ki?m tra xem m?t s? c� ph?i l� b?i c?a 7 hay kh�ng
int isMultipleOf7(int num) {
    return (num % 7 == 0);
}

// H�m xu?t c�c s? nguy�n c� 2 ch? s? v� l� b?i c?a 7
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
    printMultiplesOf7(); // G?i h�m d? xu?t c�c s? nguy�n c� 2 ch? s? v� l� b?i c?a 7
    return 0;
}

