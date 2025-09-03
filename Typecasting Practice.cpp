#include<iostream>
using namespace std;
int main() {
	int a=46.9;
	float b=13;
	cout<<"the value of a is "<<(int)a;
	cout<<"\nthe value of b is "<<(float)b;
	//#########you can also write in this method###############
	cout<<"the expression is "<<a+b<<endl;
	cout<<"the expression is "<<a+(int)b<<endl;
	cout<<"the expression is "<<a+int(b)<<endl;
	return 0;	
}

