#include<iostream>
#include<cmath>
using namespace std;
float formula(float u,float a,float t){
	float b;
	b=u*t+a*pow(t,2)*1/2;
	return b;
}
int main(){
	float u,a,t;
    cout<<"u = ";
    cin>>u;
     cout<<"\na = ";
    cin>>a;
     cout<<"\nt = ";
    cin>>t;
    cout<<"\nExpected Output = "<<formula(u,a,t);
}
