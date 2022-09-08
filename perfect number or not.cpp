# include <iostream>
# include <string>
using namespace std;
int main()
{
    int i=1, u=1, sum=0,n;
 cout << "\n\n Check whether a given number is a Perfect number:\n";
 cout << "------------------------------------------------------\n";
cout << "Input a number: ";
cin >> n;
   while(u<=n)
   {                              
     if(u<n)
     {
      if(n%u==0 )
      sum=sum+u;
     }                         
     u++;
   }                           
   if(sum==n)
   {
    cout<<n<<" is a Perfect number."<<"\n";
   }
   else
   {
     cout<<n<<" is not a Perfect number."<<"\n";  
   }
}
