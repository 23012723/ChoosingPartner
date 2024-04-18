#include <iostream>
using namespace std;

int main()
{
   int Attraction;
   int Brains;
   int Patience;
   int Communication;
   int Faith;

   cout<<"Rate your the following qualities to find in your partner on a scale from 1 to 10"<<endl;

    cout<<"The level of attraction you want"<<endl;
    cin>>Attraction;
    cout<<"The level of brains you want"<<endl;
    cin>>Brains;
    cout<<"The level of patience you want"<<endl;
    cin>>Patience;
    cout<<"The level of communication you want"<<endl;
    cin>>Communication;
    cout<<"The level of faith you want"<<endl;
    cin>>Faith;

if(Attraction >=7)
   if(Brains >=6)
      if(Patience >=5)
         if(Communication >=6)
            if(Faith >=8)
 cout<<"That one is the outstanding and Best one"<<endl;

 else{
  cout<<"That one is the bad one"<<endl;
 }
 else{
    cout<<"Keep looking"<<endl;
 }
return 0;
}
