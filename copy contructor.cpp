#include<iostream>
using namespace std;
class test{
	private:
		int x;
	public:
		test(){}
		test(int x1){
			x=x1;
			
		}
		test(const test &t2){
			x=t2.x;
		}
		int getX(){
			cout<<"Address of x is "<<&x<<" ";
			return x;
		}
	};
	int main(){
		test t1(7);  //normal constructor is called here
		test t2=t1; //copy constructor is called here
		test t3=test(t1); //test t3(t1)); works the same way
		cout<<"t1.x="<<t1.getX()<<endl;
		cout<<"t2.x="<<t2.getX()<<endl;
		cout<<"t3.x="<<t3.getX()<<endl;
		return 0;
	}
