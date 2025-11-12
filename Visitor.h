#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    public:
    void displayInfo(){
        cout<< "Name: "<<visitorName << endl;
        cout<< "Tickets Bought: "<< ticketsBought << endl;
    }
    
};







#endif
