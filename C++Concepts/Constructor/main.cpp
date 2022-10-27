//
//  main.cpp
//  Constructor
//
//  Created by Ravikumar on 12/08/22.
//

#include <iostream>
using namespace std;


class Rectangle {
    
public:
    int length;
    int breadth;
public:
    
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    
    Rectangle(int l, int b){
        //...Here we have to check the l and b value negitive or positive
        length = l;
        breadth = b;
    }
    
    Rectangle(Rectangle const &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    //...Mutator class
    void setlengthandBreadth(int l,int b){
        length = l;
        breadth = b;
    }
    ~Rectangle();
    int perimeter();
};

int Rectangle::perimeter(){
    
    return 2;
}

Rectangle::~Rectangle(){
    
    cout<<"Rectangle distructed :"<<endl;
}

class Test
{
public:
    void func1() {
        cout<<"Inline function"<<endl;
    }
    
  inline  void func2();
};

void Test::func2(){
    cout<<"Non-inline function"<<endl;
}


class Area{
  
private:
    int length;
    int breadth;
    
public:
    Area(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    
};


struct Demo{
    int x;
    int y;
    
    void display(){
        cout<<"Display values :"<<x<<y<<endl;
    }
};

//...Base class pinter Derived class Object
class Base{
public:
    void func1();
    void func2();
    void func3();
};

class Derived: public Base{
    
public:
    void func4();
    void func5();
};



int main() {

    //...Base class pinter Derived class Object
    Base *p;
    p = new Derived();
    p->func1();
    p->func2();
    p->func3();
    
    
    
    
//... Default or Non-parameterized constructor
    Rectangle r;
    cout<<"length :"<<r.length<<endl;
    cout<<"breadth :"<<r.breadth<<endl;
    
    //... Prameterized constructor
    Rectangle r1(10,5);
    cout<<"length :"<<r1.length<<endl;
    cout<<"breadth :"<<r1.breadth<<endl;

    //...Copy constructor
    Rectangle r2(r1);
    cout<<"length :"<<r2.length<<endl;
    cout<<"breadth :"<<r2.breadth<<endl;

    
    
    Demo d;
    d.x = 10;
    d.y = 20;
    d.display();
    
    return 0;
}






















































































