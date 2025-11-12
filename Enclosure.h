#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
    private:
    Animal* a;
    int capacity;
    int currenCount;
    public:
    void addAnimal(Animal * a){
        Animal*b = new Animal[currenCount+1];
        for(int i=0; i<currenCount; i++){
            b[i]=a[i];
        }
        b[currenCount]=a;
        currenCount++;
        Animal*t=a;
        a=b;
        delete[] t;
    }
    void displayAnimals(){
        for(int i=0; i<currenCount; i++){
            a[i].display();
        }
    }
Enclosure(){
  a=NULL;
  capacity = 0;
  currentCount=0;
}
Enclosure(Animal* a, int ca, int cu){
  a=new Animal[currentCount];
  capacity=ca;
  current=cu;
}
   ~Enclosure(){
       delete[]a;
   }     
    
};








#endif
