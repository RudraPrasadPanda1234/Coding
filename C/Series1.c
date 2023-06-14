#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf(" enter a number to print the series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			j+=1;
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}