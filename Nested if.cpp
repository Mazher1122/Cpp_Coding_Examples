#include<iostream>
using namespace std;
int main(){
int m;
cout<<"enter the marks between 1 to 100\n";
cin>>m;
if(m>=0&&m<=100){
if(m>=33)
cout<<"pass";
else
cout<<"fail";
}
else
cout<<"out of range";

}