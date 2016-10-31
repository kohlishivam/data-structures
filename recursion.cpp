#include<iostream>
using namespace std;

int factorial(int n)
{
	if (n==0 || n==1)
	{
		return 1;
	}

	else 
	{
		return n*factorial(n-1);
	}
}


bool issorted(int a[],int n)
{
	if(n==0 || n==1)
	{
		return true;
	}
	else
	{
		int chotaARRAY[100];
		for (int i = 1; i < 6; ++i)
		{
			chotaARRAY[i-1]=a[i];
		}
		bool chotaARRAYsorted = issorted(chotaARRAY,n-1);
		if(a[0]<a[1])
			return true;
		else
			return false;
	}
}



bool isseven(int a[] , int n)
{
	if(n==1)
		return false;
	if(a[0]==7)
		return true;

	int chotaARRAY[100];
    for (int i = 1; i < 6; ++i)
	{
		chotaARRAY[i-1]=a[i];
	}
	
	if (chotaARRAY[0]==7 || isseven(chotaARRAY,n-1))
	{
		return true;
	}
	else
	{
		return false;
	}

}







int towerofhanoi(int n)
{

}












int main()
{
	//int ans=factorial(5);
    //cout<<ans;


    int a[5];
    for (int i = 0; i < 5; ++i)
    {
    	cin>>a[i];
    }
    /*
    if(issorted(a,5))
    	cout<<"yes";
    else
    	cout<<"no";
    */

    /*
    if(isseven(a,6))
    	cout<<"yes";
    else
    	cout<<"no";
    */


    
	return 0;
}