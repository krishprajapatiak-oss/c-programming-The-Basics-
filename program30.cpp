//finding out if a number is greater or less than another with if/else statement

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b;
	
		printf("enter value of a:");
			scanf("%d",&a);
	
		printf(" enter the value of b:");
			scanf("%d",&b);
	
				if(a>b)
					printf("a is greater than b");
	
				else
					printf("b is greater than a");
	
	return(0);
	
}
