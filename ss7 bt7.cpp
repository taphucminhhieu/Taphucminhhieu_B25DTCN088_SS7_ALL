#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b;
    
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    printf("Cac so nguyen to trong khoang [%d, %d]:\n", a, b);
    
    int first = 1; 
    int count = 0;
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
            count++;
        }
    }
    
    if (count == 0) {
        printf("Khong co so nguyen to nao trong khoang nay.");
    } else {
        printf("\nTong cong: %d so nguyen to", count);
    }
    
    return 0;
}
