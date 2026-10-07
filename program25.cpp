//how to swap values of variables a and b (or 2 variables) with with using variable c)

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,c;

		printf("enter value of a:");
		scanf("%d",&a);
		printf("enter value of b:");
		scanf("%d",&b);
		
			c=a;
			a=b;
			b=c;
		
		printf("a=%d and b=%d.",a,b);
		
	return(0);
	
}
