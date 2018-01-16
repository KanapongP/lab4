#include<iostream>
#include<cmath>
using namespace std;
float enter(int x){
	float e=2.71828;
	float y;
	y=3*pow(x,3)+2*e+pow(2,2*x+1)+sqrt(pow(x,2)+1);
	return y;
}
int main(){
	float x;
	cout<<"Enter x = ";
	cin>>x;
	cout<<"\nResult y = "<<enter(x);
	return 0;
}
