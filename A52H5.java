/*
Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.

Input :
1 0 3 0
0 6 0 0
0 0 1 0
9 0 0 9

Output : TRUE
*/


import java.util.*;


class Matrix
{
	
	boolean CheckSparse(int Arr[][], int iRow, int iCol)
	{
		int i = 0,j = 0, iCnt1 = 0, iCnt2 = 0;
		for(i = 0; i < iRow; i++)
		{
			for(j = 0; j < iCol; j++)
			{
				if(Arr[i][j]==0)
				{
					iCnt1++;
				}
				else
				{
					iCnt2++;
				}
			}
		}
		if(iCnt1>iCnt2)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

class A52H5
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
		
		boolean bret = mobj.CheckSparse(Arr,row,col);
		if(bret == true)
		{
			System.out.println("Given matrix is a Sparse matrix");
		}
		else
		{
			System.out.println("Given matrix is not a Sparse matrix");
		}
			
	}
}