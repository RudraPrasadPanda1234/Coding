/*********************************************************************************************************
Input is rows and columns
Sample Input: 
4 
4 
Sample output:
1234
1234
1234
1234
**********************************************************************************************************/
#include <stdio.h>
int main ()
{
  int i, j, n, m;    //variable declaration 
  printf ("Enter number of rows:");   //asking user to enter number of rows
  scanf ("%d", &n);                        //entered value is stored in n
  printf ("Enter number of columns:");  //asking user to enter number of columns
  scanf ("%d", &m);                         //entered value is stored in m
  for (i = 1; i <= n; i++)            //staring of for loop
    {
      for (j = 1; j <= m; j++)          // starting of nested for loop
	  {
	  printf ("%d", j);              //j value is printed 
	  }                          // i for loop ends
      printf ("\n");                 // \n for nextline
    }                           // j for loop ends
  return 0;                        //used for termination of int main() 
}