#include<iostream>

using namespace std;

int main(){
	
	cout<<"a�o? ";
	int a;
	cin>>a;
	
	if(a/4 != 0)  cout<<"El a�o es bisiesto";
	else if(a/100 != 0) cout<<"El a�o no es bisiesto";
	else if(a/400 != 0) cout<<"El a�o es bisiesto";
	else cout<<"El a�o es bisiesto";
	
	
}
