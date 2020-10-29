#include<stdio.h>

int main(){
	int a,b;
	int sum,diff;
	
	printf("Enter First number:  ");
	scanf("%d",&a);
	printf("Enter Second number:  ");
	scanf("%d",&b);
	if(a%10 == b%10)
	{
		printf("same rightmost digit");
	}
	
	return (0);
}