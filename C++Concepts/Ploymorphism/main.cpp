//
//  main.cpp
//  Ploymorphism
//
//  Created by Ravikumar on 17/08/22.
//

#include <iostream>
using namespace std;


class Base{
    
public:
    int length;
    int breadth;
    
public:
    virtual float kal() = 0;
    virtual void func() = 0;
//    {
//        cout<<"func of Base"<<endl;
//    }
};

class Derived: public Base
{
public:
    void func()
    {
        cout<<"func of Derived"<<endl;
    }
    float kal(){
        return length*breadth;
    }
};




int main() {

    Base *p = new Derived();
    p->func();
    p->kal();

    
    
    
    return 0;
}

























































