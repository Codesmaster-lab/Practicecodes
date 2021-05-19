#include<stdio.h>
#include<conio.h>
#include <time.h>
#include<stdlib.h>

int sizeu(int a[])
{
	int i=0;
	while(a[i]!=NULL)
	{
		i++;
	}
	return i-1;
}

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


void SelectionSort(int a[],int n)
{

	for (int i = 0; i < n-1; ++i)
	{
		int min=i;
		for (int j = i+1; j < n; ++j)
		{
			
			if(a[min]>a[j])
				min=j;
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}

	

}


void InsertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    	
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }

}


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}




int main()
{


  printf("\nSystem Generated:  Only time shown took 10000 data input :  Normal unsorted data\n");
     

int aw[10000],bw[10000],cw[10000],dw[10000],ew[10000];
for(int i = 0 ; i < 10000 ; i++ ) {
	 aw[i]= rand() % 10000;
	bw[i]=aw[i];
	cw[i]=aw[i];
	dw[i]=aw[i];
	ew[i]=aw[i];
}

 
//printf("Hello\n");

int n=10000;


    clock_t t;
     t = clock();
    BubbleSort(aw,n);
    t = clock() - t;
   double time_taken = (( double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("BubbleSort took %f seconds to execute \n", time_taken);

   t = clock();
    SelectionSort(bw,n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("SelectionSort took %f seconds to execute \n", time_taken); 

    t = clock();
    InsertionSort(cw,n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("InsertionSort took %f seconds to execute \n", time_taken); 





   t = clock();
    mergeSort(dw,0,n-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("MergeSort took %f seconds to execute \n", time_taken);


    t = clock();
    quickSort(ew,0,n-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("QuickSort took %f seconds to execute \n", time_taken); 




    printf("\nSystem Generated:  Only time shown took 100000 data input :  Nearly sorted data\n");
     

//int aw[10000],bw[10000],cw[10000],dw[10000],ew[10000];
for(int i = 0 ; i < 10000 ; i++ ) {
	 if(i<9900)
	 aw[i]= i+1;
	else
		aw[i]=rand() % 10000;
	bw[i]=aw[i];
	cw[i]=aw[i];
	dw[i]=aw[i];
	ew[i]=aw[i];
}

 
//printf("Hello\n");

n=10000;


    //clock_t t;
     t = clock();
    BubbleSort(aw,n);
    t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("BubbleSort took %f seconds to execute \n", time_taken);

   t = clock();
    SelectionSort(bw,n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("SelectionSort took %f seconds to execute \n", time_taken); 

    t = clock();

    InsertionSort(cw,n);
    
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("InsertionSort took %f seconds to execute \n", time_taken); 





   t = clock();
    mergeSort(dw,0,n-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("MergeSort took %f seconds to execute \n", time_taken);


    t = clock();
    quickSort(ew,0,n-1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("QuickSort took %f seconds to execute \n", time_taken); 






printf("User Input Data \n");
//int n;
printf("Enter number of elements :");
scanf("%d",&n);
printf("\nEnter the array :\n");

int a[1000],b[1000],c[1000],d[1000],e[1000];
for (int i = 0; i < n; ++i)
{
	scanf("%d",&a[i]);
	b[i]=a[i];
	c[i]=a[i];
	d[i]=a[i];
	e[i]=a[i];
}

printf("\nSorted Array are as follow with different techniques in ascending order:\n");
	//int a[12]={2,6,4,3,7,1,10,43,5,8,47,100};

     //a=generate_normaldata();	

     //a=generate_nearlysorteddata();	
	//int n=12;
	 // clock_t t;
     t = clock();
    BubbleSort(a,n);
    for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("BubbleSort took %f seconds to execute \n", time_taken);  


    t = clock();
    SelectionSort(b,n);

    for (int i = 0; i < n; ++i)
	{
		printf("%d ",b[i]);
	}

printf("\n");
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("SelectionSort took %f seconds to execute \n", time_taken); 


   
    t = clock();
    InsertionSort(c,n);
    for (int i = 0; i < n; ++i)
	{
		printf("%d ",c[i]);
	}

printf("\n");
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("InsertionSort took %f seconds to execute \n", time_taken); 


    t = clock();
    mergeSort(d,0,n-1);

    for (int i = 0; i < n; ++i)
	{
		printf("%d ",d[i]);
	}

printf("\n");
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("MergeSort took %f seconds to execute \n", time_taken);


     t = clock();
    quickSort(e,0,n-1);

    for (int i = 0; i < n; ++i)
	{
		printf("%d ",e[i]);
	}

printf("\n");
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    printf("QuickSort took %f seconds to execute \n", time_taken); 




  


  

    
	return 0;
}