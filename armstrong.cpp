//wap to check whether a number is armstrong or not
#include<iostream>
using namespace std;
int main()
{
	int n, n1, rem, num=0;
	cout<<"enter a number: ";
	cin>>n;
	n1=n;
	while(n!=0)
	{
		rem=n1%10;
		num+=rem*rem*rem;
		n1/=10;
	}
	if(num==n)
	{
	cout<<"is an armstrong number: ";
	
	}
	else
	{
	cout<<"is not an armstrong: ";
	}
	return 0;
	}

