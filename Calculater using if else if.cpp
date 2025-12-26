#include<iostream>
using namespace std;
int main(){
	int a,b;
	char op;
	cout<<"enter 1st no\n";
	cin>>a;
	cout<<"enter 2nd no\n";
	cin>>b;
	cout<<"enter the operator\n";
	cin>>op;
	if(op=='+')
	cout<<a+b;
	else if(op=='-')
	cout<<a-b;
	else if(op=='*')
	cout<<a*b;
	else if(op=='/')
	cout<<a/b;
	else
	cout<<"wroung operator";
}