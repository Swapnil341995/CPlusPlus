#include<iostream>
using namespace std;

int area();
int area(int);
int area(int,int);
static float PI = 3.14;

int main(){
	char rad;
	int len,br;
	cout<<"Enter the radius of circle : "<<endl;
	cin>>rad;
	cout<<"Ennter the length and br"<<endl;
	cin>>len>>br;
	cout<<area(rad)<<endl;
	cout<<area(len,br)<<endl;
}

int area(int radius){
	return(PI*radius*radius);
}

int area(int length,int breadth){
	return(length*breadth);
}