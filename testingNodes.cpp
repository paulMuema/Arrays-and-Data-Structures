#include<iostream>
using namespace std;
struct node{
    string data;
    node *next;
};

int main()
{
	node *node1=new node();
	node *node2=new node();
	node *node3=new node();
	
	node1->next=NULL;
	node2->next=NULL;
	node3->next=NULL;
	
	//add values
	
	node1->data="Dalton";
	node2->data="Mary";
	node3->data="Alice";
	
	//create head and tail
	node *head= new node();
	node *tail=new node();
	head=NULL;
	tail=NULL;
	
	//linking nodes
	head=node3;
	tail=node2;
	
	node3->next=node1;
	node1->next=node2;
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"\nAddress of node1 is: "<<node1;
	cout<<"\nAddress of node3 is: "<<node3;
	cout<<"\nAddress of the link of node3 is "<<node3->next;
	
}
