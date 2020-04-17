#include<iostream>
using namespace std;

int main(){
	
	int *p,x;
	float *f,y;
	char *c,z;
	x = 5;
	p = &x;
	cout<<"x = "<<x<<endl;
	cout<<"p = "<<p<<endl;
	cout<<"p = "<<&p<<endl;
	cout<<"p = "<<*p<<endl;
	cout<<"p = "<<*&p<<endl;
	
	cout<<"---------------------------------------------------"<<endl;
	
	y = 5;
	cout<<y<<endl;
	cout<<*&y<<endl;
	
	f = &y;
	cout<<"f = "<<f<<endl;
	cout<<"f = "<<*f<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"y = "<<y<<endl;
	
}