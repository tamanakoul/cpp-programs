//program to print fibonacci series usinf function
#include<iostream>
using namespace std;
void fibseries(int term){
	int first=0, second=1, next, c, n;
    for(c=0;c<n;c++){
		if(c<=1)
			next=c;
		else{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<endl;
	}
}
int main(){
	int term;
	cout<<"Enter the no of terms:\n";
	cin>>term;
	fibseries(term);
}
