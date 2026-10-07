//to calculate area and perimeter of a rectangle

#include<stdio.h>
#include<conio.h>

int main(){
	
	float l,a,b,p;
	
		printf("enter the value of length:");
			scanf("%f",&l);
	
		printf("enter the value of bredth:");
			scanf("%f",&b);
	
				a=l*b;
				p=(2*l)+(2*b);
	
		printf("area = %fcm^2 and \n perimeter = %fcm",a,p);
	
	return(0);
	
}
