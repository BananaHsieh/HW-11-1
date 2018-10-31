#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a, b, ans;
	printf("input two integers ");
	scanf_s("%d %d", &a, &b);
	for (int i = a; i <= a * b; i++) {
		if (i%a == 0 && i%b == 0) { ans = i; break; }
	}
	printf("the LCM is %d\n", ans);

	system("pause");
	return 0;
}