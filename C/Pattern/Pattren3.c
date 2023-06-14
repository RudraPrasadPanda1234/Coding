#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

