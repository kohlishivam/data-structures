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


class linkedlist
{
public:
	node*head;
	node*tail;

	linkedlist():head(NULL),tail(NULL){}

	void inser_last(int d)
	{
		if(head==NULL)
		{
			head = tail = new node(d);
		}
		else
		{
			tail->next = new node(d);
			tail = tail->next;
		}
	}


	void insert_front(int d)
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
		 }
	}



	void insert_position(int d,int pos)
	{
		if(pos==0)
		{
			insert_front(d);
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


	void delete_front()
	{
		node*temp=head;
		delete temp;
		head=head->next;
	}



	void delete_position(int pos)
	{
		if(pos==0)
		{
			delete_front();
		}
		int count=1; 
		node*temp = head;
		while(count<pos)
		{
			count++;
			temp=temp->next;
		}
		temp->next = temp->next->next;
		delete temp->next;
	}




	void reverse(){
		node*current = head;
		node*prev = NULL;
		node*nextNode;

		while(current!=NULL){
			//Save the nextNode
			nextNode = current->next;
			//Make current node point to prev node
			current->next = prev;
			
			//Update Condition
			prev = current;
			current = nextNode;
		}
		head = prev;
	}




	void print()
	{
		node*temp=head;

		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;		}
		cout<<endl;
	}
};





int main()
{
	linkedlist l;
	l.inser_last(1);
	l.inser_last(2);
	l.inser_last(3);
	l.inser_last(4);
	l.inser_last(5);
	l.inser_last(6);

	l.insert_front(2);
	l.insert_front(3);
	l.insert_front(4);
	l.insert_front(5);
	l.insert_front(6);
	l.insert_front(7);

	l.delete_front();
	l.delete_front();


	l.insert_position(99,5);

	l.delete_position(3);




	l.print();
	l.reverse();
	l.print();




	return 0;
}