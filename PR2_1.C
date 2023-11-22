#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	clrscr();
	printf("Enter Your Number: ");
	scanf("%d",&n);
	(n%2==0)?printf("Your Number is Even..\n")
		:printf("Your Number is Odd");
	getch();
}