#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
	int x = 5;
	int y = 10;
	swap(x, y);
	cout<<"x = "<<x<<"y = "<<y<<endl;
}
inline void swap(int *x,int *y){
		int temp = *x;
		*x = *y;
		*y = temp;
	}