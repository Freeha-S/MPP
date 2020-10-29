#include<stdio.h>

int main(){
	int a,b;
	int sum,diff;
	
	printf("Enter First number:  ");
	scanf("%d",&a);
	printf("Enter Second number:  ");
	scanf("%d",&b);
	sum=a+b;
	if(a>b)
		diff=a-b;
	else
		diff=b-a;
	
	if(a==5||b==5||diff==5||sum==5)
		{
			printf("true");
			
		}
	
	
	return (0);
}