#include<stdio.h>
#include<conio.h>
void main(){
	float unit,bill,extchar,billamt;
	clrscr();
	printf("=====+++=====+++=====");
	printf("\nEnter Units: \n");
	scanf("%f",&unit);
	if(unit<50){
		billamt=unit*0.50;
		printf("Your Bill Amount is: %f",billamt);
	}else if(unit<100 && unit>50){
		billamt=(unit-50)*0.75+25;
		printf("Your Bill Amount is: %f",billamt);
	}else if(unit<200 && unit>=100){
		billamt=(unit-150)*1.20+75;
		printf("Your Bill Amount is: %f",billamt);
	}else{
		billamt=(unit-250)*1.50+225;
		printf("Your Bill Amount is: %f",billamt);
	}
	extchar=billamt*0.20;
	printf("\nYour Total Amount with Extra Charge is: %f",extchar+billamt);
	getch();
}