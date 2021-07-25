/*
Write java program which accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

Input : N : 6
        NO: 66
        Elements : 85 66 3 66 93 88
Output : 1

Input : N : 6
        NO: 12
        Elements : 85 11 3 15 11 111
Output : -1

*/


import java.util.*;


class Number
{
	public int FirstOcc(int Arr[],int iNo)
	{
		int i = 0;
		for(i=0; i<Arr.length; i++)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i<Arr.length)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}

class A46H2
{
	public static void main(String arg[])
	{
		int iValue = 0, i = 0, iSize = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements :");
		iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the elements");
		for(i = 0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		System.out.println("Enter number to search");
		iValue = sobj.nextInt();
		
		Number obj = new Number();
		
	    int iRet =  obj.FirstOcc(arr,iValue);
		System.out.println("First Occurance of number is :"+iRet);
			
	}
}
