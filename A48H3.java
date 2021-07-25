/*
Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.

Input : N : 6
        NO: 66
        Elements : 85 66 3 66 93 88
Output : 3

Input : N : 6
        NO: 93
        Elements : 85 66 3 66 93 88
Output : 4

Input : N : 6
        NO: 12
        Elements : 85 11 3 15 11 111
Output : -1


*/


import java.util.*;


class Number
{
	public int LastOcc(int Arr[],int iNo)
	{
		int i = 0;
		for(i=Arr.length-1; i>1; i--)
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

class A48H3
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
		
	    int iRet =  obj.LastOcc(arr,iValue);
		System.out.println("Last Occurance of number is :"+iRet);
			
	}
}
