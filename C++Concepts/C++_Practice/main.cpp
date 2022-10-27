//
//  main.cpp
//  C++_Practice
//
//  Created by Ravikumar on 12/07/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int sum(int n);
float CalculateDistance(int u, int v, int a);
int Simpleinterest(int p, int t, int r);
int DistancebetweentwoPoints(int x1,int y1,int x2, int y2);

int main() {
    
    //...Area of base and height Area = 1/2(b*h)
    
    //    int area,base,height;
    //    cout<<"Enter base and height \n";
    //    cin>>base>>height;
    //    area = (base*height)*0.5;
    //    cout<<"Area is "<<area<<endl;
    //
    //...Sum of natural numebrs
    
    //    int n=5;
    //    cout<<"Enter n number";
    //   // cin>>n;
    //    int total = sum(n);
    //    cout<<"total = "<<total<<endl;
    //
    
    //...Calculating Distance
    //    int v,u,a;
    //    cout<<"Enter 3 values \n";
    //    cin>>v>>u>>a;
    //    float distance = CalculateDistance(v, u, a);
    //    cout<<"distance is "<<distance<<endl;
    //
    
    //...Simple interest
    //    int p,t,r;
    //    cout<<"Enter ptr values ";
    //    cin>>p>>t>>r;
    //    int si = Simpleinterest(p, t, r);
    //    cout<<"si value is "<<si<<endl;
    //
    
    //...Find out distance between two points
    //    int x1,y1,x2,y2;
    //    cout<<"Enter x and y values \n";
    //    cin>>x1>>x2>>y1>>y2;
    //    int di = DistancebetweentwoPoints(x1, y1, x2, y2);
    //    cout<<"di is = "<<di<<endl;
    
    
    //...Increment and decrement
    //    int x=5,j;
    //    j = x-- * 10;
    //    cout<<j<<" "<<x<<endl;
    //
    
    //...Bitwise Operator
    char x = 5,y;
    y = x>>1;
    cout<<(int)y<<endl;
    
    
    return 0;
}

int DistancebetweentwoPoints(int x1,int y1,int x2, int y2)
{
    int distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}



//...Calculating simple interest
int Simpleinterest(int p, int t, int r)
{
    int si;
    si = (p*t*r)/100;
    return  si;
    
}


//...Calculating Distance
float CalculateDistance(int u, int v, int a)
{
    float distance = (v*v - u*u)/(2*a);
    return distance;
}

int sum(int n)
{
    //...Sum of natural numbers
    int sum=0;
    sum = n*(n+1)/2;
    return sum;
}
