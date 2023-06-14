#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf(" enter a number to print the series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}