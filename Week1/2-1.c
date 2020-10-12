#include<stdio.h>

int main(){
	int n,i;
	int diff;
	
	printf("Enter a number:  ");
	scanf("%d",&n);
	if( n > 51)
		{diff= n-51;
			printf(" %d :",diff*3);
		}
	
	return (0);
}