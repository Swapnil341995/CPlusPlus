#include<iostream>
#include<conio.h>
using namespace std;

class A{
	int a,b, *p,c;
	public :
	A(){
		cout<<"grsxgdrg";		
	}
	/*A(A &z)
	{
		a = z.a;
		b = z.b;
		p = new int;
		//*p = *(z.p);
	}*/
	void setData(int x,int y,int z)
	{
		a = x;
		b = y;
		*p = z;
		//c = z;
	}
	void showData()
	{
		cout<<"a is "<<a<<" b is "<<b<<" and p is "<<*p<<endl;
	}
	~A(){
		delete p;
		cout<<"grsxgdrg";
	}
};

int main()
{
	A a1;
	a1.setData(1,10,11);
	a1.showData();
	A a2 = a1;
	a2.showData();
}