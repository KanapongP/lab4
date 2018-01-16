#include<iostream>
using namespace std;
int findDivisor(int x){
	int y=2;
	while(y<=x){
		if(x%y==0){
			return y;
		}else{
			y++;
		}
	}
}
int main(){
	int x;
	cout<<"Input X = ";
	cin>>x;
	if(x>=2){
	cout<<"\nExpected Output = "<<findDivisor(x);
	}else{
		cout<<"\n No Expected Output";
	}
	return 0;
}
