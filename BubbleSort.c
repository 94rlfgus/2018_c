#include <stdio.h>

void BubbleSort(int ary[], int len);

int main()
{
	int arr[4] = {3, 2, 4, 1};
	int i;
	
	BubbleSort(arr, sizeof(arr)/sizeof(int));
	
	for(i = 0; i < sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);
	
	return 0;
}

void BubbleSort(int ary[], int len)
{
	int i, j;
	int temp;
	
	for(i = 0; i < len-1; i++)
	{
		for(j = 0; j < (len-i)-1; j++)
		{
			if(ary[j] > ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
	
}
