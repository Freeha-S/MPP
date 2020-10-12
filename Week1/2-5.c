#include<stdio.h>

int main(){
	int x,y,z;
	int sum,diff;
	
	printf("Enter First number:  ");
	scanf("%d",&x);
	printf("Enter Second number:  ");
	scanf("%d",&y);
	printf("Enter First number:  ");
	scanf("%d",&z);
	
	if(y>x&&z>y)
		printf("true");
	else
		printf("false");
	
	return (0);
}