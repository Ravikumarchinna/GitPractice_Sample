//
//  main.cpp
//  ExceptionHandling
//
//  Created by Ravikumar on 29/09/22.
//

#include <iostream>
using namespace std;

class MyException: exception
{
    
};

int division(int a,int b) throw(MyException)
{
    if (b == 0)
        throw MyException();
    return a/b;
}

int main() {
    
    int x=10,y=0,z;
    
    try {
        if (y==0) {
            throw 1;
        }
        z = x/y;
        cout<<z<<endl;
    } catch (int e) {
        cout<<"Division by zero"<<e<<endl;
    }
    
    cout<<"Bye"<<endl;
    
    return 0;
}
