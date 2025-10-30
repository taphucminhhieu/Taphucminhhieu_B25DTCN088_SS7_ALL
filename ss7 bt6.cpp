#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char number[100];
    
    printf("Nhap mot so nguyen: ");
    scanf("%s", number);
    
    char reversed[100];
    strcpy(reversed, number);
    reverseString(reversed);
    
    printf("So dao nguoc cua %s la: %s\n", number, reversed);
    
    return 0;
}
