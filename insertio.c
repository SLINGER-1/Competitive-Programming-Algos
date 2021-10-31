#include<stdio.h>
#define size 10
int a[size];

void insertion_sort(int n)
{
	int value, i, j;
	for(i=1; i<n; i++)
	{
		value = a[i];
		j = i-1;
		while((value < a[j]) && (j>=0))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = value;
	}
	printf("The sorted array : \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}

void main()
{
	int n,i;
	printf("Please enter the number of elements \n");
	scanf("%d",&n);
	printf("Please enter the numbers to be sorted \n");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	insertion_sort(n);
}