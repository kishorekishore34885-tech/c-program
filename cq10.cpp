#include<stdio.h>
int main(){
	int a,b,sum;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	sum = a + b;
	if(sum%2==0)
	printf("sum %d is even\n",sum);
	else
	printf("sum %d is odd\n",sum);
	return 0;
	}