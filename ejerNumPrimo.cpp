#include <iostream>
using namespace std;

int main()
{
   int Num, primo=0;
  cout<<" Digíta un numero y verificaré si es primo o no lo es \n";
  cout<<" Digíta el numero:";
  cin>>Num;
  for(int i= 1; i <= Num; i++ )
 {
    if(Num % i ==0)
    {
        primo++;
    }
 }
 if( primo ==2)
 {
    cout<<" El # "<<Num<< " es primo \n";
 }
 else
 {
    cout<<"El # "<<Num<< " no es primo\n";
  }
}