//
//  main.cpp
//  Arraya
//
//  Created by Ravikumar on 16/07/22.
//

#include <iostream>
using namespace std;

int main() {
    
    
    
//    float a[] = {2.7,3.9,4.8};
    
//    for (int i=0; i<3; i++) {
//        cout<<a[i]<<endl;
//    }
    
//    for (auto x:a) {
//        cout<<x<<endl;
//    }
    
    
    //...Linear Search Program
    
//    int array[5] = {2,5,3,6,1},k,number;
//
//    cout<<"Enter element \n";
//    cin>>number;
//
//    for (k=0; k<5; k++) {
//        if (array[k] == number) {
//            cout<<"number  found at index = "<<k<<endl;
//            return 0;
//        }
//    }
//    cout<<"number not found \n";
//    cout<<endl;

    
#pragma mark ______________________________ Start Binary Search ______________________________________________________
    //...Binary Search
    // Rules:: Should be in sorting order
    // 1.
//    int a[10]  = {6,8,13,17,20,22,25,28,29,30};
//    int l=0,h=9,key,mid,count=0;
//
//    cout<<"Enter a key \n";
//    cin>>key;
//
//    while (l <= h) {
//        mid = (l+h)/2;
//        if (key == a[mid]) {
//            cout<<"Found at index = "<<mid<<endl;
//            cout<<"count of operations  = "<<count<<endl;
//            return 0;
//        }
//       else if (key < a[mid]) {
//           h = mid-1;
//           count++;
//        }
//       else{
//           l = mid+1;
//           count++;
//
//       }
//    }
//    cout<<"Key not found \n";
#pragma mark ______________________________ End Binary Search ______________________________________________________

    //...Find the Maximum
//    int a[10] = {-2,-4,-6,-8,-12,-3,-5,-7,-9,-11};
//
//    int min = INT_MAX;
//
//    for (auto x:a) {
//
//        if (min > x) {
//            min = x;
//        }
//    }
//    cout<<"max number is = "<<min<<endl;
//
    
    
//    int count = 1;
//    for (int i=0; i<5; i++) {
//
//        for (int j=0; j<i; j++) {
//
//            cout<<count<<" ";
//            count++;
//        }
//        cout<<endl;
//    }
    
    //...Pattern Program-1
    
    int i,j;
    
//    for (i=0; i<4; i++) {
//
//        for (j=0; j<4; j++) {
//
//            if (i>j) {
//                cout<<" ";
//            }
//            else{
//                cout<<"*";
//            }
//        }
//        cout<<endl;
//    }
    
//
//    for (i=4; i>0; i--) {
//
//        for (j=i; j>0; j--) {
//
//            if (j>i) {
//                cout<<" ";
//            }
//            else{
//                cout<<"*";
//            }
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//
//    int space = 3;
//    for (i=0; i<4; i++) {
//
//        for (j=0; j<4; j++) {
//
//            if (space > j) {
//                cout<<" ";
//            }
//            else{
//                cout<<"*";
//            }
//        }
//        space--;
//
//        cout<<endl;
//    }
    
    
    //...Addition of two matrices
    
//    int a[2][3] = {4,4,4,4,4,4};
//    int b[2][3] = {2,2,2,2,2,2};
//    int c[2][3];
//
//
//    for (i=0; i<2; i++) {
//        for (j=0; j<3; j++) {
//            c[i][j] = a[i][j]*b[i][j];
//        }
//    }
//
//    for (i=0; i<2; i++) {
//        for (j=0; j<3; j++) {
//
//            cout<<c[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    
    //... To find Average of array elements
    
    int n,sum=0,num[10];
    cout<<"Enter value \n";
    cin>>n;
    for (i=0; i<n; i++) {
        cout<<"Enter value";
        cin>>num[i];
    }
    
    for (i=0; i<n; i++) {
        sum += num[i];
    }
    cout<<"Sum = "<<sum<<endl;
    
    
    return 0;
}
