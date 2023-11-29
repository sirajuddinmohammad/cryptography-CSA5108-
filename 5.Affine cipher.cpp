#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,p;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	printf("enter the plain text: ");
	scanf("%d",&p);
	c=(a*p+b)%26;
	printf("the ciphertext is:%d\n",c);
}
