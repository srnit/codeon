#include <stdio.h>

#define N 5

void insert_sort(int a[], int n);

int main()
{
	int a[N] = {5 , 3, 1, 2, 4};
	
	insert_sort(a, N);
	
	return 0;
}

void insert_sort(int a[], int n)
{
	int i, j;
	
	for (i = 1; i < n; i += 1)
	{
		int temp = a[i];
		
		j = i - 1;
		
		while ((j >= 0) && (a[j] > temp))
		{
			a[j + 1] = a[j];
			--j;
		}
		
		a[j+1] = temp;
	}
}
