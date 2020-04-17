#include<iostream>
using namespace std;

int add(int,int,int = 0);
int main(){
	int x = 5;
	int y = 7;
	
	cout<<add(x,y)<<endl;
	
}

int add(int a, int b,int c){
	return (a+b+c);
}