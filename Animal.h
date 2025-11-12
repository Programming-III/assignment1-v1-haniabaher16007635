#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
    
   private:
   string name;
   int age;
   bool isHungry;
public :
void display(){
   cout<< name<< endl;
   cout<< age << endl;
}
void feed(){
   if(isHungry==true){
       cout<<"Feed the animal"<<endl;
       }
       else cout<<"Do not feed the animal"<<endl;
    
}
 Animal(){
     name=" ";
     age=0;
     isHungry=false;
 }
 Animal(string n, int a, bool h){
     name=n;
     age=a;
     isHungry=h;
 }
     
   ~Animal(){}; 
    
};



#endif
