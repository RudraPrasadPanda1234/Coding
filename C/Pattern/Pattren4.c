/* we have to divide it into two parts 
1st    |  2nd
2      |
24     |   2
246    |    42
2468   |     642
246810 |      8642
*/
#include<stdio.h>
int main ()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		//for 1st 
		for(j=2;j<=i*2;j=j+2)
		{
			printf("%d",j);
		}
		//for 2nd
		for((j=(i-1)*2);j>=2;j-=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}