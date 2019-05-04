#include <stdlib.h>
#include <time.h>
#include<iostream>
#include "tarea.hpp"

using namespace std;

 
int main()
{
   
   int num,arreglo[20];
   
    srand(time(NULL));
    
    for(int i = 0; i<20; i++)
    
    {
        num  =  rand() % (501);
        cout<<num<<" ";
        arreglo[i]=num;    
    }
    
    cout<<"Trama de números aleatorios"<<endl;
    
   cipherData (arreglo, 2); 
}
