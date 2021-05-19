#include<stdio.h>
#include<conio.h>
#include <time.h>
#include<stdlib.h>

void BubbleSort(int a[],int n)
{
	//int n=sizeu(a);
	for (int i = n-1; i >=0; i--)
	{
		for (int j = 0; j < i; ++j)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	
}

int BinarySearch(int a[],int beg, int end,int key)
{
	if(beg<=end)
	{
	int mid=(beg+end)/2;

	if(a[mid]==key)
	{
        return mid;
	}
	else if(a[mid]>key)
	{
		end=mid-1;
		return(BinarySearch(a,beg,end,key));
	}
	else
	{
		beg=mid+1;
		return(BinarySearch(a,beg,end,key));
	}
   }
else
{
	return -1;
}
}

int main()
{
	printf("\tSearching Algorithms:\n");
	 int n;
	 printf("Enter number of elements to be entered : ");
     scanf("%d",&n);
     printf("\nEnter the array :\n");
     int a[1000];
     for (int i = 0; i < n; ++i)
     {
     	scanf("%d",&a[i]);
     }
     
     
     
	printf("\n1.\tLinear Searched\n");
   printf("Note: If one or more elements are same as key first occurance is printed \n ");
    printf("Enter a Key element that is to be searched :");
     int key;
     scanf("%d",&key);
    clock_t t;
     t = clock();
     int index=0;
     for (int i = 0; i < n; ++i)
     {
     	if(a[i]==key)
     	{
     		index=i+1;
     		break;
     	}
     }

   if(index>0)
   	printf("%d is found at %d\n",key,index);
   else 
   printf("%d is not found in the array\n",key);
   
    t = clock() - t;
   double time_taken = (( double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("Linear Search took %f seconds to find the key \n", time_taken);


     

	printf("\n2.\tBinary Searched\n");

	printf("Note: To execute Binary search the array is first sorted \n");
	printf("The sorted array is :\n");
    BubbleSort(a,n); 
    
    for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}

    printf("\n"); 

   printf("\n Enter a Key element that is to be searched :");
    // int key;
     scanf("%d",&key);
     
  
     t = clock();
     
     int ind=BinarySearch(a,0,n-1,key);
      if(ind>=0)
   	printf("%d is found at position %d\n",key,ind+1);
      else 
    printf("%d is not found in the array\n",key);

    t = clock() - t;
   time_taken = (( double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("Binary Search took %f seconds to find the key \n", time_taken);




	return 0;
}