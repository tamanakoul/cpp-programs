#include<iostream>
using namespace std;
class sample
{
    int a;
    public:
            sample()    //praramtrised constructor
            {
                a=30;
            }
            sample(int b)
            {
                a=b;
            }
            void display()
            {
                cout<<"the value of a =\t"<<a;
            }
};
int main(){
    sample obj1;
    sample obj2(8);
    obj1.display();
    cout<<"\n";
    obj2.display();
    return 0;

}
