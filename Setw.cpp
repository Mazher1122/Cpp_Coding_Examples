#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//	p is the price of product
int p1=124,p2=456,p3=456,p4=356;
cout<<"product"<<setw(30)<<"price"<<endl;
cout<<"____________________________________\n";
cout<<"Oil"<<setw(32)<<p1<<endl;
cout<<"Mango"<<setw(30)<<p2<<endl;
cout<<"Sugar"<<setw(30)<<p3<<endl;
cout<<"Salt"<<setw(31)<<p4<<endl;
cout<<"___________________________________\n";
int t=p1+p2+p3+p4;
cout<<"total"<<setw(30)<<t;


}