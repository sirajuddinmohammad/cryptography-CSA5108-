#include<stdio.h>
int modinverse(int a,int m)
{
	a=a%m;
	int x;
	for(x=1;x<m;x++)
	{
		if((a*x)%m==1)
		return x;
		return -1;
	}
}
void breakaffinecipher(char ciphertext[],int n)
{
	char mostfrequent='B';
	char secondmostfrequent='U';
	int a,b;
	int a1=mostfrequent-'A';
	int a2=secondmostfrequent-'A';
	int m=26;
	int ainverse=modinverse(a1,m);
	b=(ainverse*(a2-a1+m))%m;
	printf("Affine Cipher Paramenter:\n");
	printf("a: %d\n",ainverse);
	printf("b: %d\n",b);
	printf("decrypted message:\n");
	for(int i=0;i<n;i++)
	{
		if(ciphertext[i]>='A' && ciphertext[i]<='Z')
		{
			int x=ciphertext[i]-'A';
			int decryptedchar=(ainverse*(x-b+m))%m;
			if(decryptedchar<0)
			decryptedchar+=m;
			printf("%c",decryptedchar+'A');}
			else{
			printf("%c",ciphertext[i]);
		}
	}

	printf("\n");
}
int main()
{
	char ciphertext[]="YOURCIPHERTEXT";
	int n=sizeof(ciphertext)-1;
	breakaffinecipher(ciphertext,n);
}
