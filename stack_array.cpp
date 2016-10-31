#include<iostream>
using namespace std;

class stack_array
{
	int stk[5];
	int top;

public:
	stack_array():top(0){}

	void push(int d)
	{
		if(top>4)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			stk[top] = d;
			top++;
		}
	}

	bool isempty()
	{
		if(top==0
		{
			return true;
		}
	}


	void pop()
	{
		if(top==0)
		{
			cout<<"underflow"<<endl;
		}
		else
		{

			top--;
		}
	}


	void top_element()
	{
		cout<<top<<endl;
	}



	void print()
	{
		for (int i = 0; i < top; ++i)
		{
			cout<<stk[i];
			cout<<endl;
		}
	}
	
};



int main()
{
	stack_array s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(33);

	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();

	s.print();
	s.top_element();


	return 0;
}