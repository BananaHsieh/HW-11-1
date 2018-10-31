#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	char AA[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char aa[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char alphabet[100];

	printf("input an alphabet: ");
	gets(alphabet);
	
	for (int i = 0; i < 26; i++) {
			if (alphabet[i] == AA[i])printf("%c\n",aa[i]) ;
			if (alphabet[i] == aa[i])printf("%c\n", AA[i]);
	}
	
	
	system("pause");
	return 0;
}

