#include<iostream>
using namespace std;

int main(){
	int *p,x;
	x = 6;
	int &q = x;
	cout<<q<<endl;
	cout<<x<<endl;
	q++;
	cout<<q<<endl;
	cout<<x<<endl;
	
	cout<<"----------------------------------"<<endl;
	
	int z = 10;
	int b = 15;
	int &a = z;
	z++;
	cout<<*(&a);
	//&a = b;
	cout<<a;
}