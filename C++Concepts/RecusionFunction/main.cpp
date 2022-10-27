//
//  main.cpp
//  RecusionFunction
//
//  Created by Ravikumar on 27/07/22.
//

#include <iostream>
using namespace std;


void func(int n)
{
    if (n>0) {
        cout<<n<<endl;
        func(n-1);
    }
}

int search(int A[],int k)
{
    for (int i=0; i<5; i++) {
        
        if (k == A[i]) {
            cout<<"Existed :"<<k<<endl;
            return k;
        }
    }
    
    return -1;
}


int main() {
    
    int x=5;
    func(x);
    
    int a[] = {2,5,4,3,7},k;
    
    cout<<"Enter value to find"<<endl;
    cin>>k;
    search(a, k);
    //...
    return 0;
}
