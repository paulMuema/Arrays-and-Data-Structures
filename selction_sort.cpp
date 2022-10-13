//selection sort
#include<iostream>
using namespace std;
int i, j, n;
int array[100];
void getvalues()
{
	cout<<"How many values: ";
	cin>>n;
	cout<<"Enter the values: ";
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

int main()
{
	getvalues();
	cout<<"\nOriginal unsorted values: ";
	display();
	cout<<"\nSorted values: ";
	selectionsort();
	display();
}
