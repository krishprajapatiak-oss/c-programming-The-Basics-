//how to use ternary operators #[condition]?[true]:[false]:)

#include<stdio.h>
#include<conio.h>

int main(){
	
	int age;
	
		printf("enter your age:");
		scanf("%d",&age);
	
			//to find if a person can vote or note
	
			(age >= 18)?printf("can vote"):printf("cannot");
	
	return(0);
	
}
