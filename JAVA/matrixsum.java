
//2D Array
import java.util.*;

public class matrixsum {
	public static void main(String[] args)
	{
		int row1,col1,row2,col2,i,j;
		Scanner in = new Scanner(System.in);
		int matrix1[][]= new int[50][50];
		int matrix2[][]= new int[50][50];
		int sum[][]=new int[50][50];
		System.out.println("Enter the number of row of first matrix:");
		row1=in.nextInt();
		System.out.println("Enter the number column of the first matrix");
		col1=in.nextInt();
		System.out.println("Enter the values of first matrix");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				matrix1[i][j]=in.nextInt();
				//n=n+a[row][col];
			}
		}
		System.out.println("Enter the number of row of second matrix:");
		row2=in.nextInt();
		System.out.println("Enter the number column of the second matrix");
		col2=in.nextInt();
		//System.out.println("The matrix is");
		System.out.println("Enter the values of second matrix");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				matrix2[i][j]=in.nextInt();
			}
		}
		if(row1==row2 && col1==col2)
		{
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col1;j++)
				{
					sum[i][j]=matrix1[i][j]+matrix2[i][j];
				}
			}
		}
		else
		{
			System.out.println("The dimension mismatched");
		}
		System.out.println("The sum of the matrix is:");
		for(i=0;i<row1;i++)
			{
				for(j=0;j<col1;j++)
				{
					
					System.out.print(sum[i][j]+"  ");
				}
				System.out.println( );
			}
	}
}
//Code By Rudra