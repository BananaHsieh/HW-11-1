#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	long long int x=0,y=1;
	long long int a;
	puts("input n");
	scanf_s("%d",&n);
	printf("0,1");
	for (int i = 0; i <= n-3; i++) {
		a = x + y;
		x = y;
		y = a;
		printf(",%lld", a);
	}
	printf("\n");
	system("pause");
	return 0;
}