//how to use ternary operators #'>'

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,c;
	
		printf("enter value of a:");
		scanf("%d",&a);
	
		printf("enter the value of b:");
		scanf("%d",&b);
	
			c = (a>b)?a:b;
	
		printf("greatest number is %d",c);
	
	return(0);
	
}
