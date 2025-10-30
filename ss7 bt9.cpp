#include <stdio.h>
#include <math.h>
int main(){
	long n;
	printf("Nhap so nguyen duong n: ");
	scanf("%ld",&n);
	
	printf("Cac truong hop co the: \n");
	for(int a=1;a<=cbrt(n);a++){
		for(int b=1;b<=cbrt(n);b++){
			if((pow(a,3)+pow(b,3))==n){
				printf("%d^3 + %d^3 = %ld \n",a,b,n);
			}
		}
	}
}
