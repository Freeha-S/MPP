#include<stdio.h>

int main(){
	int a,b;
	int sum;
	
	printf("Enter First number:  ");
	scanf("%d",&a);
	printf("Enter Second number:  ");
	scanf("%d",&b);
	sum=a+b;
	for(int i=10; i<=20;i++)
	{
	if(sum == i)
		{
			printf("30");
			return(0);
		}
	
	}
	
	return (0);
}