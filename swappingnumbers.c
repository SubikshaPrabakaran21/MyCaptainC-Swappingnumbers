#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	//swapping
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("After Swapping, a = %d\n ",a);
	printf("After Swapping, b = %d\n ",b);
	return 0;
} 
