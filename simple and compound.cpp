#include<iostream>
using namespace std;

class intrest

{

int p,n,r,k,y,z;

public:

void getdata();

void display();

};

void intrest::getdata()

{

cout<<"enter p,n,and r";

cin>>p>>n>>r;

}

void intrest::display()

{

cout<<" simple intrest";

z=p*n*r/100;

cout<<z;

cout<<"compound intrest";

y=p*(((1+r/100),n));

cout<<y;

}

int main()

{

intrest a;

a.getdata();

a.display();

}
