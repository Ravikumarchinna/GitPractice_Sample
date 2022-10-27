//
//  main.cpp
//  C++11
//
//  Created by Ravikumar on 25/10/22.
//

#include <iostream>
using namespace std;



class Rectangle
{
    int length;
    int breadth;
    
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length*breadth;
    }
};

int main() {

//... auto
    //...we need not know the what the data tyoe required
    
    auto x = 2*2.34+'a';
    cout<<x<<endl;

 //...Final
    //... use is Final resticts the inherit
    
    //...Final key uses are
    // 1 restricts the Inherit from parent to child class
    //2 restrcits the over functions also (Parent and child)
    
    
    
    //...Smart Pointers
    //...We must de-allocate the Heap memory otherwise memory problems will create
    
    
    //...Unique_ptr
//    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
//    cout<<ptr->area()<<endl;
//
//    unique_ptr<Rectangle> ptr2;
//    ptr2 = move(ptr);
//    cout<<ptr2->area();
//    cout<<ptr->area(); //...Here it will crash beacuse unique_ptr will maintain only one

    
    //...Shared_ptr
    //...It will maintain the more than one pointers with same object
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;
    
    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;
    cout<<"Ptr 2"<<ptr2->area()<<endl;
    cout<<"Ptr "<<ptr->area()<<endl;
    cout<<ptr.use_count()<<endl;
    
    
    
    return 0;
}


















































































































