
# define arr_size 9
#include <stdio.h>
#include <stdlib.h>
void selection_sorting (int a[], int size);
int main(void) {
	int arr[arr_size]={10,5,2,16,24,1,3,20,30};

	int i;

	selection_sorting (arr,arr_size);
	for(i=0;i<arr_size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	return EXIT_SUCCESS;
}

void selection_sorting (int a[], int size)
{int min,swap,i,j;//3c
for (i=0;i<size-1;i++)//2n
{
	min=i;//c*n
	for (j=i+1;j<size;j++)//2n^2
	{
		if (a[min]>a[j])//n^2
		{
			min=j;//c*n^2
		}
	}
	swap=a[min];//c*n
	a[min]=a[i];//c*n
	a[i]=swap;//c*n
}//F(n)=3n^2+cn^2+2n+4c*n+3c
}

