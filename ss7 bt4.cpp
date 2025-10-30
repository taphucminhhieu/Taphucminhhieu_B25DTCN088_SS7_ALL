#include <stdio.h>
int main () {
	int number1,number2;
	printf("chieu dai: ");
	scanf("%d",&number1);
	printf("chieu rong: ");
	scanf("%d",&number2);
	
	for(int i = 0;i<number1;i++){
		for (int j=0 ;j<number2;j++)
		printf("* ");
		printf("\n");
	}
	
}


