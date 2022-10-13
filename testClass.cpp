//classes and objects - objects belong in a class such functions and data.

#include<iostream>
using namespace std;
class adding{
	int a,b,sum;
	public:
		void getvalues(){
			cout<<"Enter two values: ";
			cin>>a>>b;
		}
		void compute(){
			sum=a+b;
		}
		void display(){
			cout<<a<<" + "<<b<<" = "<<sum;
		}
};
int main(){
	adding usiu;
	usiu.getvalues();
	usiu.compute();
	usiu.display();
}
