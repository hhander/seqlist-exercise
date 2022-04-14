#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr1[6] = { 2,5,6,0,0,0 };
	int arr2[3] = { 1,2,3 };
	int end = 5;
	int end1 = 2;
	int end2 = 2;
	while (end1 >= 0 && end2 >= 0)
	{
		if (arr1[end1] > arr2[end2])
		{
			arr1[end] = arr1[end1];
			end--;
			end1--;
		}
		else//arr2[end2]>arr1[end1]
		{
			arr1[end] = arr2[end2];
			end2--;
			end--;
		}
	}
	while (!(end2<0))
	{
		arr1[end] = arr2[end2];
		end2--;
		end--;
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}



