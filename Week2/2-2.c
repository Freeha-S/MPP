#include<stdio.h>

int main(){
	int a,b;
	int diff;
	
	printf("Enter First number:  ");
	scanf("%d",&a);
	printf("Enter Second number:  ");
	scanf("%d",&b);
	if( a==30 || b==30 || (a+b==30))
		{
			printf("True");
		}
	else{
		printf("False");
	}
	
	return (0);
}