//2D Array
import java.util.Scanner;
class matrixsum
{
	static int i,j,n;
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int a[][]= new int[3][2];
		System.out.print("Enter elements:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				a[i][j]=in.nextInt();
				n=n+a[i][j];
			}
		}
		System.out.println("The matrix is");
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.println(" ");
		}

		System.out.println("The sum is "+n);
	}
}