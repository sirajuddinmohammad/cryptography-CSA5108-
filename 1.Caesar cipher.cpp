 #include<stdio.h>
#include<ctype.h>
int main()
{
	char text[500],ch;
	int key,i;
	printf("enter a message to encryt:");
	scanf("%s", text);
	printf("enter the key:");
	scanf("%d",&key);
	for(i=0;text[i]!='\0';i++)
	{
		ch=text[i];
		if(isalnum(ch))
		{
			if(islower(ch))
			{
				ch=(ch-'a'+key)%26+'a';
			}
			if(isupper(ch))
			{
				ch=(ch-'A'+key)%26+'A';
			}
			if(isdigit(ch))
			{
				ch=(ch-'0'+key)%10+'0';
			}
		}
		else
		{
			printf("invalid message:");
		}
		text[i]=ch;
	}
	printf("encrypted message: %s",text);
}
