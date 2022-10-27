//
//  main.cpp
//  Functions
//
//  Created by Ravikumar on 25/07/22.
//

#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
    return  a>b ? a:b;
}


//...Default argument function

int max(int a, int b, int c=0)
{
    return a>b && a>c ? a:(b>c ? b:c);
}

int fun()
{
    static int x=10;
    return ++x;
}

void display()
{
    cout<<"Hello"<<endl;
}
int maxValue (int a, int b)
{
    return a>b ? a:b;
}



int main() {
    
    
    cout<<fun()+fun()<<endl;
    
    
    //...Pointer function

//    void (*fp)(); //...Function Pointer declaration
//    fp = display; //... Function Pointer Initialization
//    (*fp)(); //...Function Pointer calling
    
    int (*fp)(int,int);
    fp = maxValue;
    (*fp)(20,10);
    
    // sharedPrintController
    // btnPrintClicked
    
    
    
    
    //...This two for Template functions
    //    cout<<Max(20, 30)<<endl;
    //    cout<<Max(20.4, 10.5)<<endl;
    
    //  cout<<max(10,20)<<endl;
    
    //... static variables is initialize only once
    int a[5] = {'c','d','f','h','k'};
    //
    //    for (int i=0; i<5; i++) {
    //
    //        cout<<a[i]<<endl;
    //    }
    
    
    for (auto  x:a) {
        
        //  cout<<"Array elements :"<<x<<endl;
        
        switch (x) {
            case 'h':
                cout<<"High "<<endl;
                break;
                
            default:
                break;
        }
    }
    
    
    
    return 0;
}






































































