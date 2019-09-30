
# define arr_size 9
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int b);
int linear_search (int a[],int num , int size);
int main(void) {
	int arr[arr_size]={10,5,2,16,24,1,3,20,30};

	int i,n,element_position;
	scanf("%d",&n);

	bubble_sort (arr,arr_size);
	element_position=linear_search (arr,n,arr_size);
	for(i=0;i<arr_size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	if(element_position==-1)
	{
		printf("element is not exist.");
	}
	else
		printf("element %d is exist and it's position is arr[%d]",n,element_position);
	return EXIT_SUCCESS;
}


int linear_search (int a[],int num , int size)
{
	int i;//c
	for (i=0;i<size;i++)//2n
	{if (num==a[i])//n
	{
		return i;//c
	}
	}

	return -1;

}//F(n)=3n+2c



void bubble_sort(int a[], int b)
{int i,temp;
temp=0;
for(i=0;i<b-1;i++)

{if (a[i]>a[i+1])
{temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i=-1;
}
}
}

