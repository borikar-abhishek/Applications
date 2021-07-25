/*
Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/


import java.util.*;


class ArrayDemo
{
	public int Difference(int Arr[])
	{
		int i = 0, iSum1 = 0, iSum2 = 0;
		for(i = 0; i<Arr.length; i++)
		{
			if((Arr[i]%2)==0)
			{
				iSum1 = iSum1 + Arr[i];
			}
			else
			{
				iSum2 = iSum2 + Arr[i];
			}
		}
		return iSum1-iSum2;
		
	}
}

class A44H1
{
	public static void main(String arg[])
	{
		int iSize = 0, i = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter no. of elements :");
		iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the elements : ");
		for(i = 0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		ArrayDemo obj = new ArrayDemo();
		
		int iRet = obj.Difference(arr);
		System.out.println("Difference is : "+iRet);
		
	}
}
