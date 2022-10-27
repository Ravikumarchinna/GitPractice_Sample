//
//  main.cpp
//  FriendFunctions
//
//  Created by Ravikumar on 24/08/22.
//

#include <iostream>
using namespace std;


//...Friend Function call
//class Test
//{
//private:
//    int a;
//protected:
//    int b;
//public:
//    int c;
//
//    friend void func();
//};
//
//void func()
//{
//    Test t;
//    t.a = 10;
//    t.b = 20;
//    t.c = 30;
//}

//...Whole class using friend keyword
class Yours;
class My
{
    
private:int a;
protected:int b;
public:int c;
    friend Yours;
    
};

class Yours
{
public: My m;
void func()
{
    m.a = 10;
    m.b = 20;
    m.c = 30;
}
};


int main() {

    





    return 0;
}
