#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Animal a("Lion", 5, true);
    Animal b("Parrot", 2, false);
    Animal c("Snake",3,true);
    a.display();
    b.display();
    c.display();
    Visitor v1("Sarah Ali", 3 );
    v1.displayInfo();
    
    return 0;
}
