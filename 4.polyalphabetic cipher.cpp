#include<stdio.h>
#include<string.h>
#include<ctype.h>
void polysubcipher(char *plaintext,char *key)
{
	int i,j;
	int keylen=strlen(key);
	for(i=0;i<strlen(plaintext);i++)
	{
		if(isalpha(plaintext[i]))
		{
			int offset=tolower(key[i%keylen])-'a';
			if(islower(plaintext[i]))
			{
				plaintext[i]='a'+(plaintext[i]-'a'+offset)%26;
			}
			else
			{
				plaintext[i]='A'+(plaintext[i]-'A'+offset)%26;
			}
		}
	}
}
int main()
{
	char plaintext[1000],key[1000];
	printf("enter the plain text:");
	fgets(plaintext,sizeof(plaintext),stdin);
	printf("enter the key:");
	fgets(key,sizeof(key),stdin);
	
	strtok(plaintext,"\n");
	strtok(key,"\n");
	
	polysubcipher(plaintext, key);
	printf("encrypted text:%s\n",plaintext);
}
