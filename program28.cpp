//to calculate area and circumference of a circle

#include<stdio.h>
#include<conio.h>

int main(){
	
	int r;
	float a, c, pi=3.14;
	
		printf("enter value of radius:");
			scanf("%d",&r);
	
				a= pi*(float)*r*r;
				c= 2*pi*(float)r;
	
		printf("area = %f and circumference = %f",a,c);
	
	
}
