#include <iostream>
#include <conio.h>
#include <string.h>
 
using namespace std;
 
int main ()
{
     char palabra[50], aux[50];
     cin>>palabra;
     strcpy(aux,palabra); //Copiando
     strrev (palabra); //invirtiendo
     if(strcmp(palabra,aux)==0) //comparando
     {
          cout<<"\n\nLa palabra "<<aux<<" Es igual escrita al reves."<<endl;
     }
     else
     {
          cout<<"\n\nLa palabra "<<aux<<" NO Es igual escrita al reves."<<endl;
 
     }
     getch();
     return(0);
}