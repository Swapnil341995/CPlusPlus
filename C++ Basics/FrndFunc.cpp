#include<iostream>
using namespace std;
class B;
class A{
	int a;
	int b;
	public : 
	void SetData(int x,int y){
		a = x;
		b = y;
	}
	void ShowData(){
		cout<<"a is "<<a<<"b is "<<b<<endl;
	}
	friend void fun1(A ,B );
};

class B : public A
{
	int c;
	int d;
	public : 
	friend void fun1(A,B);

};

void fun1(A o1,B o2){
	cout<<o1.a<<" "<<o1.b<<" "<<o2.a<<" "<<o2.b;
}

int main(){
	A a1;
	a1.SetData(100,200);
	B b1;
	b1.SetData(300,400);
	fun1(a1,b1);
	b1.ShowData();
}