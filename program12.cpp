//how to perform subtration with arithemetic operations

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,c;
		printf("enter value of a:");
		scanf("%d",&a);
		
		printf("enter value of b:");
		scanf("%d",&b);
		
		c=a%b;
		
		printf("remainder of %d and %d is %d.",a,b,c);
		
	return(0);
}
