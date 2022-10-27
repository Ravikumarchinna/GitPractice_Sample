//
//  main.cpp
//  Pattern
//
//  Created by Ravikumar on 19/07/22.
//

#include <iostream>
using namespace std;


int main() {
    
    
        int i,j;
    //...Pattern 1
//    *****
//    *****
//    *****
//    *****
//    *****
//        for (i=0; i<5; i++) {
//
//            for (j=0; j<5; j++) {
//
//                cout<<"*";
//            }
//            cout<<endl;
//        }
    
//...Pattern 2
//    *
//    **
//    ***
//    ****
//    *****
//    for (i=0; i<5; i++) {
//
//        for (j=0; j<=i; j++) {
//
//            cout<<"*";
//        }
//        cout<<endl;
//    }
    
    int space = 0;
    for (i=0; i<5; i++) {
        
        for (j=0; j<5; j++) {
            
            if (i<=j)
                cout<<"*";
            else
            cout<<" ";
        }
        space++;
        cout<<endl;
    }
    
    
    
    
    return 0;
}








































































