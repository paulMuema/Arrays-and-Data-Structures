//working with arrays
//prepared by Dalton
#include<iostream>
using namespace std;
int main()
{
	int array[100]; //declare name of the function and the size
	int i, n;
	cout<<"How many values: "; //cout works like a print function
	cin>>n;                    //cin works like a way to input
	cout<<"Enter values: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"Values are "<<endl; //endline
	for (i=0; i<n; i++)
	{
		cout<<array[i]<<" ";
	}
}
