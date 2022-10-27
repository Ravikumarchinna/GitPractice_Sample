//
//  main.cpp
//  Pointer
//
//  Created by Ravikumar on 20/07/22.
//

#include <iostream>
using namespace std;

int main() {
    
    
    //    int x=10;
    //    int *p;
    //    p = &x;
    
    //    cout<<x<<" :x value "<<endl;
    //    cout<<&x<<" :x address "<<endl;
    //    cout<<p<<" :p here x-address value "<<endl;
    //    cout<<&p<<"address of p"<<endl;
    //    cout<<*p<<"p dereferencing "<<endl;
    
    //...Static size of memory
    //    int size;
    //    cout<<"Enter number of elements \n";
    //    cin>>size;
    //    int A[size];
    //    cout<<sizeof(A)<<endl;
    
    
    //    int *p = new int[10];
    //    delete[] p;
    //    p = nullptr;
    //    p = new int[20];
    
    
    
    //    int a[5] = {2,4,6,8,10};
    //    int *p = a;
    //    int *q = &a[3];
    
    
//    int A[]={2,4,6,8,10,12};
//    int *p=A;
//    int *adress=A;
//    for (int k=0; k<5; k++) {
//
//        adress += k;
//        cout<<"Address : "<<adress<<endl;
//    }
//
//    //    p++;
//    //    cout<<p<<endl;
//    //    cout<<*p<<endl;
//
//
//    p = p+2;
//    cout<<p<<endl;
//    cout<<*p<<endl;
    
    
    
    
//    int x=10;
//    int &y = x;
//
//    cout<<y;
//
//    x++;
//    y++;
//    cout<<x<<endl;
    
    int x=10;
    int *y=&x;

    int  &z= *y;
    cout<<z<<endl;

    
    
    
    
    
    
    
    return 0;
}



























































