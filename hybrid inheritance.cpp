#include <iostream>
using namespace std;
 
class Animal{
public:
    Animal(){
        cout << "This is an Animal ";
    }
};
 
class Dog: public Animal{
public:
    Dog(){
        cout << "Which is Dog ";
    }
};
 
class Domestic{
public:
    Domestic(){
        cout << "And is Domestic ";
    }
};
 
class Rocky: public Dog, public Domestic{
	public:
    Rocky(){
        cout << "\nName of the dog is Rocky! \n";
    }
};
 
int main()
{
    Rocky mydog;
    return 0;
}
