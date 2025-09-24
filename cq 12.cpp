#include<stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int last = n/100;
	if(n % 2== 0)
	printf("last digit of a number is even");
	else
	printf("last digit of a number is odd");
	return 0;
}