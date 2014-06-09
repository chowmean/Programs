//doneeeeeee


class shellsort
			{
				public static void main(String[] args)	
				{int arr[] = {12,34,23,3423,2,3};
	System.out.println("array before sorting");
	for(int i=0;i<arr.length;i++)
	System.out.println(arr[i]);
	System.out.println("array after sorting");
	shellSort(arr);
	for(int i=0;i<arr.length;i++)
	System.out.println(arr[i]);
	
			}
	public static void shellSort(int arr[])
			{ int span=5;
			for(int i=span;i>0;i=i-2)
				{for(int j=0;j<arr.length-i;j++)
				{int t;
				if(arr[j]>arr[j+i])
				{t=arr[j];
				arr[j]=arr[j+i];
				arr[j+i]=t;}}
				System.out.println("after each pass");
				for(int l=0;l<arr.length;l++)
				System.out.println(arr[l]);
				
				}
			int i, j, newValue;
			for (i = 1; i < arr.length; i++) {
            newValue = arr[i];
            j = i;
            while (j > 0 && arr[j - 1] > newValue) {
                  arr[j] = arr[j - 1];
                  j--;
            }
            arr[j] = newValue;
      }
			}
			}