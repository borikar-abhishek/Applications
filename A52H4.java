/*
Write a program which accept matrix and check whether the matrix is identity matrix or not.
Identity matrix is a square matrix with 1’s along the diagonal from upper left to lower right and 0’s in all other positions.
If it satisfies the structure as explained before then the matrix is called as identity matrix.

Input :
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

Output : TRUE
*/


import java.util.*;


class Matrix
{
	
	boolean CheckIdentity(int Arr[][], int iRow, int iCol)
	{
		int i = 0,j = 0;
		for(i = 0; i < iRow; i++)
		{
			for(j = 0; j < iCol; j++)
			{
				if(i==j && Arr[i][j]!=1)
				{
					return false;
				}
				else if (i!=j && Arr[i][j] != 0)
				{
					return false;
				}
			}
		}
		return true;
		
	}
}

class A52H4
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows :");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns :");
		int col = sobj.nextInt();
		
		int Arr[][] = new int[row][col];
		
		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr[i].length; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Entered elements are");
		for(int i = 0; i < Arr.length; i++)                   
		{
			for(int j = 0; j < Arr[i].length; j++)              
			{
				System.out.print(Arr[i][j] + "\t");
			}
			System.out.println();
		}
		
		Matrix mobj = new Matrix();
		
		boolean bret = mobj.CheckIdentity(Arr,row,col);
		if(bret == true)
		{
			System.out.println("Given matrix is an Identity matrix");
		}
		else
		{
			System.out.println("Given matrix is not an Identity matrix");
		}
			
	}
}