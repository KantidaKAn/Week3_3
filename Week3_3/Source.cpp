#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num < 0)
	{
		printf(" Please insert the number that is greater or equal zero");
	}
	else if (num >= 0) 
	{
		if (num >= 50)
		{
			printf("Pass");
		}
		else if (num < 50) 
		{
			printf("Fail");
		}
	}
	return 0;
}