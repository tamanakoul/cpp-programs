/*program to swap two numbers using call by address technique*/
#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int a= 10, b=20;
    cout<<"value before swapping\t"<<a<<"\t"<<b;
    swap(&a,&b);
    cout<<"\n after swapping using call by address techniques :"<<a<<"\t"<<b;
}
void swap(int *c, int *d)
{
    //a=a+b;
    //b=a-b;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    
}


