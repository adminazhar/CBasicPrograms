#include<stdio.h>
#include<conio.h>

void main(){
int input,i,naturalsum=0;

printf("Please enter the last number till you want the sum: ");
scanf("%d",&input);

for(i=0;i<=input;i++){
 naturalsum = naturalsum + i;
}

printf("The sum of natural numbers is: %d",naturalsum);

getch();
}
