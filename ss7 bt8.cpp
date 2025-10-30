#include <stdio.h>
int main(){
	long n;
	printf("Nhap so nguyen n: ");
	scanf("%ld",&n);
	
	printf("Nhap chu so x: ");
	int x;
	scanf("%d",&x);
	
	long temp = n;
	int dem = 0, unit;
	
	while(temp>0){
		unit = temp%10;
		if(unit==x){
			dem++;
		}
		temp = temp/10;
	}
	printf("Chu so %d xuat hien %d lan trong so %ld",x,dem,n);
	
}
