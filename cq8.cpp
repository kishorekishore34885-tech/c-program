#include<stdio.h>
int main(){
	int num,lastdigit;
	printf("enter a number;");
	scanf("%d",&num);
	lastdigit=num % 10;
	if(lastdigit % 3==0)
	printf("last digit % d is divisible by 3.\n",lastdigit);
	else
	printf("last digit % d is not divisible by 3.\n",lastdigit);
	return 0;
}