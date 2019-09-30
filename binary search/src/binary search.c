
# define arr_size 9
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int b);
int binary_search (int a[],int num , int size);

int main(void) {
	int arr[arr_size]={10,5,2,16,24,1,3,20,30};
	int i,n,element_position;
	scanf("%d",&n);

	bubble_sort (arr,arr_size);
	element_position=binary_search (arr,n,arr_size);
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

int binary_search (int a[],int num , int size)
{int first=0,last=size-1,middle;//3c

middle=(first+last)/2;//c
while (first<=last)//n
{printf("%d\n",middle);// for checking worst case
if (a[middle]>num)//log n
{
	last=middle-1;//c log n
	middle=(first+last)/2;//c log n
}
else if (a[middle]==num)//log n
{
	return middle;//c
}
else
{
	first=middle+1;//log n
	middle=(first+last)/2;//log n
}

}
return -1;//c
}//F(n)=6c log n+n+5c



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

