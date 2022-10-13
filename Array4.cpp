//linear search in an array
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
	
	int searchkey;
	cout<<"Enter value to search: ";
	cin>>searchkey;
	
	for(i=0; i<n; i++)
	{
		if(searchkey==array[i])
		{
			cout<<searchkey<<" has been found at location "<<i;
			break;
		}
	}
	if(i>=n)
	{
		cout<<searchkey<<" was not found";
	}
}
