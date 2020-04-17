#include<iostream>
using namespace std;

class A{
	
	int a,b;
	public : 
	void SetData(int x,int y){
		a = x;
		b = y;
	}
	void ShowData(){
		cout<<"a is "<<a<<"b is "<<b<<endl;
	}
	A(){}
	A(A &z){
		a = z.a;
		b = z.b;
	}
};

int main(){
	A a1,a2,a3;
	a1.SetData(2,3);
	a1.ShowData();
	a2 = a1;
	a2.ShowData();
}