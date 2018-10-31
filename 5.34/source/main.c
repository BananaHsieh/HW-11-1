#include<stdio.h>
#include<stdlib.h>

int pow(int x, int y);
int main(void)
{
	int a, b;
	printf("pow(a,b) input a,b :");
	scanf_s("%d %d", &a, &b);

	printf("%d\n", pow(a, b));
	
	system("pause");
	return 0;
}

int pow(int x, int y)
{
	int ans=1;
	for (int i = 1; i <= y; i++) {
		ans = ans * x;
	}
	return ans;
}