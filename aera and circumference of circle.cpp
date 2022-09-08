#include<iostream>
using namespace std;

int main()

{

float r;

cout<<"enter the radius";

cin>>r;

int exp;

cout<<"enter choice(1-2)";

cin>>exp;

switch (exp)

{

case 1:

cout<<"area of a circle"<<3.14*r*r;

break;

case 2:

cout<<"circumference of a circle"<<2*3.14*r;

break;

default:

cout<<"enter correct radius value";

break;

}

return 0;

}
