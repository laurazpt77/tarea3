#include "tarea.hpp"
#include <stdlib.h>
#include<iostream>

void cipherData (int arreglo[20], int ite)

 {
    int temp[20];
    
    
    for (int i=0;i<ite;i++)
    
    {
        for (int j=0;j<20;j++)
        
        {
            
            if (j%2==0)
            
            {  
                
                if (j==0)
            
                 {
                    temp[0]=arreglo[19]+arreglo[1];  
                
                 }
                 
                 
            
               else 
            
                  {  
                         temp[j]=arreglo[j-1]+arreglo[j+1];                     //Aunque en este caso se está evaluando para detectar números pares
                                                                               //se deja sumando ya que el arreglo va de 0-19 y no de 1-20, por lo que funciona de manera inversa
                   }               
            }
            
            else
            
            {
                      if (j%2!=0)
            
                      {
                          
                           if (j==19)
            
                            {
                               temp [19]=arreglo[18]-arreglo[0];   
                
                            }
                              
                              else 
                              {
                                  
                                  temp[j]=arreglo[j-1] - arreglo[j+1];            //Aunque en este caso se está evaluando para detectar números impares
                                                                                 //se deja restando ya que el arreglo va de 0-19 y no de 1-20, por lo que funciona de manera inversa
                              }
                
                        }
                        
            }
            
        }
        
        
        
        for (int z=0;z<20;z++)
   
        {
            cout<<temp[z]<<"  ";
       
         }
    
        cout<<"Trama Cifrada: Ciclo #"<<i+1<<endl;
        
        for (int p=0;p<20;p++)
        
        {
            arreglo [p]=temp[p];
          
        }
        
        
    }
    
}



