//inserting a value at a given location
#include<iostream>
using namespace std;
int main()
{
	int array[100];
	int i, n;
	cout<<"How many values: ";
	cin>>n; //Allows input n
	cout<<"Enter values: ";
	for(i = 0; i<n; i++)
	{
		cin>>array[i];
	}
	
	cout<<"Original values are: "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<array[i]<<" ";
	}
	int pos;
	cout<<"Enter desired location to insert: ";
	cin>>pos;
	//shift values starting from the last value upto desired location
	for(i=n-1; i>=pos; i--)
	{
		array[i+1]=array[i];
	}
	cout<<"Enter new value: ";
	cin>>array[pos];
	
	n++;
	    cout<<"\nCurrent values are: ";
	for(i=0; i<n; i++)
	{
		cout<<array[i]<<"  ";
	}
}
