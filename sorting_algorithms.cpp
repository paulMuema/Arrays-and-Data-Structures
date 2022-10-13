//selection and insert sort
#include<iostream>
using namespace std;
int i, j, n;
int array[100];
void getvalues()
{
	cout<<"\nHow many values: ";
	cin>>n;
	cout<<"\nEnter the values: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
}

void display()
{
	for(i=0; i<n; i++)
	{
		cout<<array[i]<<" ";
	}
}

//selection sort algorithm
void selectionsort()
{
	for(i = 0; i<n; i++)
	{
		int minpos=i;
		for (j=i+1; j<n; j++)
		{
			if(array[j]<array[minpos])
			{
				minpos = j;
			}
		}
		swap(array[minpos], array[i]);
	}
}

//insertion sort algorithm
void insertionsort()
{
	for (i = 0; i < n; i++)
	{
		j=i;
		while(array[j]<array[j-1])
		{
			swap(array[j], array[j-1]);
			j--;
		}
	}
}

//bubble sort algorithm
void bubblesort()
{
	for (i=0; i < n; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			if(array[j] > array[j + 1])
			{
			
			swap(array[j], array[j + 1]);
		}
		}
	}
}
int main()
{
	getvalues();
	cout<<"\nOriginal unsorted values: ";
	display();
	
	cout<<"\nSorted values using selection sort: ";
	selectionsort();
	display();
	
	getvalues();
	cout<<"\nOriginal unsorted values: ";
	display();
	
	cout<<"\nSorted values using insertion sort: ";
	insertionsort();
	display();
	
	getvalues();
	cout<<"\nOriginal unsorted values: ";
	display();
	
	cout<<"\nSorted values using bubble sort: ";
	bubblesort();
	display();
}
