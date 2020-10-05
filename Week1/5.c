#include<stdio.h>

int main(){
	int n,i;
	int sum=0;
	
	printf("Enter a number:  ");
	scanf("%d",&n);
	for(i=n;i> 0;i--)
	{
		if(i%3==0 ||i%5==0)
		{sum+=i;
		printf("%d ,",i);}
	}
	printf("Sum : %d", sum);
	
	return (0);
}