#include<iostream>
using namespace std;
struct node{
    string data;
    node *next;
};

class linkedlist{
    node *head, *tail;
    public:
    linkedlist() //Constructor - 
    {
        head=NULL;
        tail=NULL;
    }

    void getdata(string item)
    {
        node *newnode=new node();
        newnode->data=item;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }

	void display()
	{
		node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}   
};

int main()
{
    int i, n; 
	string item;
    linkedlist usiu;
    cout<<"How many items that you want to link: ";
    cin>>n;
    cout<<"Enter the items: ";
    for(i=0; i<n; i++)
    {
        cin>>item;
        usiu.getdata(item);
    }
    usiu.display();
}
