#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;
	node* prev;



	node():data(0),next(NULL),prev(NULL){}
	node(int d):data(d),next(NULL),prev(NULL){}
};


class doublylinkedlist
{
public:
	node*head;
	node*tail;
	doublylinkedlist():head(NULL),tail(NULL){}


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
			temp->prev = tail; 
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
			node*addme = new node(d);
			node*temp = head;
			temp->prev = addme;
			addme->next = temp;
			head = addme;
		}
	}


	void add_position(int d,int pos)
	{
		if (pos==0)
		{
			add_front(d);
		}

        node*temp = head;
		int count=1;
		while(count<pos)
		{
			count++;
			temp = temp->next;
		}

		node*addme = new node(d);
		node*helper = temp->next; 
		temp->next = addme;
		addme->prev = temp;
		addme->next = helper;
		helper->prev = addme;
	}







	void delete_first()
	{
		node*temp = head;
		head = temp->next;
		head->prev = NULL;
		delete temp;
	}


	void delete_last()
	{
		node*temp = tail;
		tail = temp->prev;
		tail->next = NULL;
		delete temp;
	}


	void delete_position(int pos)
	{
		if(pos==0)
		{
			delete_first();
		}

		node*temp = head;
		int count=1;
		while(count<pos)
		{
			count++;
			temp = temp->next;
		}

		node*helper = temp->next->next;
		temp->next = helper;
		helper->prev = temp;
	}






//print using next pointer
	void print1()
	{
		node*temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"-->";
			temp = temp->next;
		}
		cout<<endl;
	}


//print using prev pointer
	void print2()
	{
		node*temp = tail;
		while(temp!=NULL)
		{
			cout<<temp->data<<"-->";
			temp = temp->prev;
		}
	    cout<<endl;
	}


	
};







int main()
{
	doublylinkedlist l;


	l.add_last(1);
	l.add_last(2);
	l.add_last(3);
	l.add_last(4);
	l.add_last(5);
	l.add_last(6);

	l.add_front(5);
	l.add_front(6);
	l.add_front(7);
	l.add_front(8);
	l.add_front(9);
	l.add_front(10);

	l.add_position(100,5);

	l.delete_first();
	l.delete_last();
	l.delete_position(5);


	l.print1();
	l.print2();





	return 0;
}
