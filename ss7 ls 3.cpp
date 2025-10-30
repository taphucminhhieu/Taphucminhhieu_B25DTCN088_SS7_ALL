#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;
    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }
    
    original = n;
    
    while (n != 0) {
        remainder = n % 10;     
        reversed = reversed * 10 + remainder; 
        n /= 10;              
    }
    
    if (original == reversed) {
        printf("%d la so doi xung (palindrome)\n", original);
    } else {
        printf("%d khong phai la so doi xung\n", original);
    }
    
    return 0;
}
