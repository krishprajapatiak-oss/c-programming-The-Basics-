//how to use modulo with assignment operator

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a;
	
		printf("enter the value of a:");
		scanf("%d",&a);
	
			a%=5; // a=a%5;
	
		printf("a is now %d",a);
	
	return(0);
	
}
