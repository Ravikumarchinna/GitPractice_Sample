//
//  main.cpp
//  OOPS-Class
//
//  Created by Ravikumar on 10/08/22.
//

#include <iostream>
using namespace std;


class Rectangle
{
    
public:
    
    int length;
    int bradth;
    
public:
    
    void setlength(int l){
        
        if (l <0) {
            length = l;
        }
        else{
            length = 1;
        }
    }
    int area()
    {
        return length*bradth;
    }
    int perimeter()
    {
        return 2*(length+bradth);
    }
    
    
};



int main() {

    Rectangle r1;
    r1.length = 10;
    r1.bradth = 20;
    
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter()<<endl;

    return 0;
}






























































