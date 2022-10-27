//
//  main.cpp
//  Inheritance
//
//  Created by Ravikumar on 15/08/22.
//

#include <iostream>
using namespace std;


//class Base {
//public:
//    int a;
//    void display(){
//        cout<<"Display of Base "<<a<<endl;
//    }
//};
//
//class Derived : public Base{
//
//public:
//    void show(){
//        cout<<"Show of Derived "<<endl;
//    }
//
//};

class Base{
public:
    Base(){
        cout<<"Non-param Base Default Constructor"<<endl;
    }
    Base(int x){
        cout<<"Parameterized constructor: "<<x<<endl;
    }
};

class Derived:public Base{
public:
    Derived(){
        cout<<"Non-param Derived Default constructor"<<endl;
    }
    Derived(int x, int y):Base(x)
    {
        cout<<"Paraterrized Derived construtor: "<<y<<endl;
    }
};

class Parent{
  
private:
    int a;
protected:
    int b;
public:
    int c;
    
};

class Child: private Parent {
  
public:
    void display(){
      //  a = 10;
        b = 20;
        c = 30;
    }
    
};

class Grandchild: public Child{
  
public:
    void show(){
        
      //  a = 10;
      //  b = 20;
      //  c = 30;
    }
};

class BasicCar{
  
public:
    void startCar(){
        cout<<"Car Started "<<endl;
    }
};

class Advanedcar: public BasicCar{
    
public:
    void playMusic(){
        cout<<"Playing Music"<<endl;
    }
    
};



int main() {
    
//    Derived d;
//    d.a = 100;
//    d.display();
//    d.show();
    Advanedcar c;
    BasicCar *ptr = &c;
    
   ptr->startCar();
 //  ptr->playMusic();
    
    
    
    Derived d(10,20);
    
    
    return 0;
}







































