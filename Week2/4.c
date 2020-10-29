#include<stdio.h>

int main(){
	int n,i;
	int sum=0;
	
	printf("Enter a number:  ");
	scanf("%d",&n);
	for(i=n;i> 0;i--)
	{
		sum+=i;
	}
	printf("Sum : %d", sum);
	
	return (0);
}