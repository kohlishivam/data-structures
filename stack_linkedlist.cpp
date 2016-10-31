#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node*next;

	node():data(0),next(NULL){}
	node(int d):data(d),next(NULL){}
};


class stack_linkedlist
{
	node*top;
public:
	stack_linkedlist():top(NULL){}
	

	void push(int d)
	{
		node*n = new node(d);
		n->next = top; 
		top = n;
	}


	void pop()
	{
		node*temp = top;
		top = temp->next;
		delete temp;
	}


	void top_element()
	{
		cout<<endl<<top->data<<endl;
	}

	void isempty()
	{
		if(top==NULL)
			cout<<"emty stack"<<endl;
	}



	void print()
	{
		node*temp = top;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl<<"^"<<endl;
			temp = temp->next;
		}
	}
	
};



int main()
{
	stack_linkedlist s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);

	s.pop();
	s.pop();

	s.print();

	s.top_element();

//	s.isempty();






	return 0;
}