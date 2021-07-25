/*
Write java program which accept N numbers from user and return product of all odd elements.

Input : N : 6
        Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
        Elements : 44 66 72 70 10 88
Output : 0

*/


import java.util.*;


class Number
{
	public int ProductOdd(int Arr[])
	{
		int i = 0, iMult = 1;
		for(i=0; i<Arr.length; i++)
		{
			if((Arr[i]%2)!=0)
			{
				iMult = iMult * Arr[i];
			}
			else
			{
				iMult = 0;
			}
		}
		return iMult;
	}
}

class A46H5
{
	public static void main(String arg[])
	{
		int i = 0, iSize = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements :");
		iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the elements");
		for(i = 0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Number obj = new Number();
		
	    int iRet = obj.ProductOdd(arr);
		System.out.println("Product of Odd elements are : "+iRet);
	}
}
