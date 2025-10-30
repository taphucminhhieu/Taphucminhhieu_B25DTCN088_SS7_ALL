#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, sum = 0, digits = 0;
    
    cout << "Nhap so nguyen n: ";
    cin >> n;
    
    original = n;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    if (sum == original) {
        cout << original << " la so Armstrong." << endl;
    } else {
        cout << original << " khong phai la so Armstrong." << endl;
    }
    
    return 0;
}
