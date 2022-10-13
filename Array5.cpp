//binary search in an array
#include<iostream>
using namespace std;
int main()
{
	int array[100];
	int i, n;
	cout<<"How many values: ";
	cin>>n; //Allows input n
	cout<<"Enter values: "; //values have to be input in a sorted order
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
	cout<<"Enter the value to search: ";
	cin>>searchkey;
	
	int low, high, mid;
	low=0;
	high=n-1;
	while(true) //	for(i=low; i<=high; i++)
	{
		mid = (low+high)/2;
		if (searchkey==array[mid])
		{
			cout<<searchkey<<" has been found at location "<<mid;
			break;
		}
		else if(searchkey<array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
		//testing for element not found
		if(low>high)
		{
			cout<<searchkey<<" was not found.";
			break;
		}
	}
}
           
