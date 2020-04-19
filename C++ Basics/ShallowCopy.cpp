#include<iostream>
#include<conio.h>
using namespace std;

class A{
	int a,b,c;
	public :
	int *p;
	A(){
		cout<<"grsxgdrg"<<endl;
		c = 5;		
	}
	void setData(int x, int y){
		a = x;
		b = y;
		p = &c;
	}
	void showData(){cout<<" a is "<<a<<" b is "<<b<<" p is "<<*p<<endl;}
	int getA(){return a;}
	int getB(){return b;}
};

class B{
	int m, n;
	public :
	int *q;
	B(){}
	B(A &b){
		m = b.getA();
		n = b.getB();
		q = b.p;
	}
	void showData(){cout<<"m is "<<m<<" n is "<<n<<" q is "<<*q<<endl;}
};

int main()
{
	A a1;
	a1.setData(1,10);
	a1.showData();
	// A a2 = a1;
	// a2.showData();


	B b1;
	b1 = a1;
	cout<<++*b1.q<<endl;
	b1.showData();
	a1.showData();		//this is shallow copy

}