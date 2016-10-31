#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;



	node():data(0),next(NULL){}
	node(int d):data(d),next(NULL){}
};



class circularlinkedlist
{
public:
	node*head;
	node*tail;


	circularlinkedlist():head(NULL),tail(NULL){}


	void add_last(int d)
	{
		if(head==NULL)
		{
			head = tail = new node(d);
		}
		else
		{
			node*temp = new node(d);
		    tail->next = temp;
		    temp->next = head;
		    tail = tail->next;
		}
	}



	void add_front(int d)
	{
		if(head==NULL)
		{
			head = tail = new node(d);
		}
		else
		{
			node*temp = new node(d);
			temp->next = head;
			head = temp;
			tail->next = temp;
		}

	}




    void add_position(int d,int pos)
	{
		if(pos==0)
		{
			add_front(d);
		}
		int count=1; 
		node*temp = head;
		while(count<pos)
		{
			count++;
			temp=temp->next;
		}
		node*addhere = new node(d);
		node*helper = temp->next;
		temp->next = addhere;
		addhere->next = helper;
    }




	void print()
	{
		node*temp1 = head;
		while(temp1->next!=head)
		{
			cout<<temp1->data<<"-->";
			temp1 = temp1->next;
		}
		cout<<temp1->data<<endl;
		cout<<tail->next->data<<endl;
	}
	
};







int main()
{
	circularlinkedlist l;

	l.add_last(1);
	l.add_last(2);
	l.add_last(3);
	l.add_last(4);
	l.add_last(5);
	l.add_last(6);

	l.add_front(2);
	l.add_front(3);
	l.add_front(4);
	l.add_front(5);
	l.add_front(6);

	l.add_position(99,5);

	l.print();




	return 0;
}