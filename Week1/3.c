#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	printf("Enter Your Name:  ");
	scanf("%s",&name);
	if((strcmp(name,"Alice")==0)|| (strcmp(name,"Bob")==0))
	{
		printf("Good Morning %s",name);
	}
	else {
		printf("Good Morning");
	}
	return (0);
}