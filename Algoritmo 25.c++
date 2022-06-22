#include<iostream>

using namespace std;

int main(){
	
	cout<<"año? ";
	int a;
	cin>>a;
	
	if(a/4 != 0)  cout<<"El año es bisiesto";
	else if(a/100 != 0) cout<<"El año no es bisiesto";
	else if(a/400 != 0) cout<<"El año es bisiesto";
	else cout<<"El año es bisiesto";
	
	
}
