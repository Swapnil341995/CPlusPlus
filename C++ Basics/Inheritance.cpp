#include<iostream>
using namespace std;

class A{
	public : 
	int b;
	int a;
	int d;
};

class B : public A
{
	
	public :
	int d;
	B(){
	cout<<a<<" "<<b<<" ";
	}
};

class C : public B
{
	public :
	C(){
		cout<<d;
	}
};

int main(){
	A a1;
	a1.a = 101;
	
	C c1;
	cout<<"abc"<<a1.d;
}