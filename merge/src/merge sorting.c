
# define arr_size 9
#include <stdio.h>
#include <stdlib.h>
void merge(int arr[],int low,int middle, int high);
void merge_sort(int a[],int low,  int high );

int main(void) {
	int arr[arr_size]={10,5,2,16,24,1,3,20,30};
	int low=0,high=arr_size-1;
	int i;

	merge_sort (arr,low,high);
    for(i=0;i<arr_size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	return EXIT_SUCCESS;
}

void merge(int arr[],int low,int middle, int high)
{int temp[high-low+1];

	int i=low,j=middle+1,k=0;


	while(i<=middle&&j<=high)
	{
		if (arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}

	}
	while(i<=middle)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high)
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	for (i=low;i<=high;i++)
	{
		arr[i]=temp[i-low];
	}
}

void merge_sort(int a[],int low,  int high )
{
if(low<high)
{
int m= (high+low)/2;
merge_sort(a,low,m);
merge_sort(a,m+1,high);
merge(a,low,m,high);
}
}
