class bubble{
				public static void main(String[] args)	throws java.lang.Exception
				{int arr[] = {12,34,23,3423,2,3};
	System.out.println("array before sorting");
	for(int i=0;i<arr.length;i++)
	System.out.println(arr[i]);
	System.out.println("array after sorting");
	bubbleSort(arr);
	for(int i=0;i<arr.length;i++)
	System.out.println(arr[i]);
				}
					
				public static void bubbleSort(int[] arr)
				{int t,j,i;
				for(j=0;j<arr.length;j++)
					{for(i=0;i<(arr.length-j-1);i++)
					{if(arr[i]>arr[i+1])
						{t=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=t;}
					
					}System.out.println("array after pass");
					for(i=0;i<arr.length;i++)
					System.out.println(arr[i]);
					
					}
				}
					
					
					
					}