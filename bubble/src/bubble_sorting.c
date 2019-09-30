
# define arr_size 9
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int b);

void bubble_sort(int a[], int b)
{int i,temp;//2c
temp=0;//c
for(i=0;i<b-1;i++)//2n

{if (a[i]>a[i+1])//n
{temp=a[i];//cn
a[i]=a[i+1];//cn
a[i+1]=temp;//cn
i=-1;//cn
}
}
}//F(n)=7cn+3c but its n^2 in worst case

int main(void) {
	int arr[arr_size]={10,5,2,16,24,1,3,20,30};

	int i;


	bubble_sort (arr,arr_size);

	for(i=0;i<arr_size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	return EXIT_SUCCESS;
}


