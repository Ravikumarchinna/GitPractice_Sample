//
//  main.cpp
//  Destructor
//
//  Created by Ravikumar on 12/10/22.
//

#include <iostream>
using namespace std;


class Demo
{
    int *p;
public:
    Demo()
    {
        p = new int[10];
        cout<<"Contructor of Demo"<<endl;
    }
    ~Demo()
    {
        delete []p;
        cout<<"Destructor of Demo"<<endl;
    }
};

void func1()
{
    Demo d;
    
//    Demo *p = new Demo();
//    delete p;
}


int main() {
    
    func1();
    
    
    
    
    
    
    
    return 0;
}
