#include <stdio.h>
#include <math.h>
int main(){
	long n;
	printf("Nhap 1 so can kiem tra: ");
	scanf("%ld",&n);
	int sochuso = 0;
	int temp = n;
	while(temp>0){
		sochuso++;
		temp = temp/10;
	}
	temp = n;
	long m = 0;
	int unit;
	while(temp>0){
		unit = temp%10;
		m = m + pow(unit,sochuso);
		temp = temp/10;
	}
	if(m==n){
		printf("%ld la so amstrong",n);
	}else{
		printf("%ld khong phai la so amstrong",n);
	}
}

