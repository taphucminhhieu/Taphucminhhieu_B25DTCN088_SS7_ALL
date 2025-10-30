#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, reversed = 0;
    
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int temp = abs(n);

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }
    if (n < 0) {
        reversed = -reversed;
    }
    
    printf("So dao nguoc: %d\n", reversed);
    
    return 0;
}
