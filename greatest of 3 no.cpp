//Program to find greatest of three numbers using nested if-else
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout<<"Enter three numbers\n";
	cin>>num1>>num2>>num3;
	if(num1>num2){
		if(num1>num3)
			cout<<"Greatest number:"<<num1;
		else
			cout<<"Greatest number:"<<num3;
		}
		else{
		if(num2>num3)
			cout<<"Greatest number:"<<num2;
		else
		cout<<"Greatest number:"<<num3;
		}
	return 0;
}
