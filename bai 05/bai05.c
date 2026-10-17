#include <stdio.h>
int main() {
    int n, i;
    int a;
    printf("Nhap so nguyen N: ");
    scanf("%d", &n);
    a = 1;
    if (n < 2) {
        a = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                a = 0;     
                break;
            }
        }
    }
    if (a == 1)
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);
    return 0;
}
