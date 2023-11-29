#include<stdio.h>
#include<string.h>
void decrypt(char *ciphertext)
{
	char e_cipher=0;
	int max_count=0;
	for(char c=32;c<=126;c++)
	{
		int count=0;
		for(int i=0;i<strlen(ciphertext);i++)
		{
			if(ciphertext[i]==c)
			{
				count++;
			}
		}
		if(count>max_count)
		{
			max_count=count;
			e_cipher=c;
		}
	}
	char t_cipher=e_cipher+1;
	char h_cipher=e_cipher+2;
	printf("decrypted message:\n");
	for(int i=0;i<strlen(ciphertext);i++)
	{
		char decrypted_char;
		if(ciphertext[i]==e_cipher)
		
	{
		char decrypted_char='e';
	}
	else if(ciphertext[i]==t_cipher)
	{
		decrypted_char='t';
	}
	else if(ciphertext[i]==h_cipher)
	{
		decrypted_char='h';
	}
	else
	{
		decrypted_char=ciphertext[i];
	}
	printf("%c",decrypted_char);
}
printf("\n");
}
int main()
{
char ciphertext[]="53‡‡†305))6*;4826)4‡.)4‡);806*;48†8¶60))85;;]8*;:‡*8†83"
"(88)5*†;46(;88*96*?;8)*‡(;485);5*†2:*‡(;4956*2(5*—4)8¶8*"
";4069285);)6†8)4‡‡;1(‡9;48081;8:8‡1;48†85;4)485†528806*81 (‡9;48;(88;4(‡?34;48)4‡;161;:188;‡?;";
 decrypt(ciphertext);
}
