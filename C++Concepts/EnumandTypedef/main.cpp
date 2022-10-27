//
//  main.cpp
//  EnumandTypedef
//
//  Created by Ravikumar on 14/07/22.
//

#include <iostream>
#include <cmath>

using namespace std;

enum week{monday=1,tuesday,wednesday,thursday,friday,saturday,sunday};

typedef int marks;
typedef int rollnumber;


int main() {

    
    week day;
    day = saturday;
   // cout<<monday;
    
//    switch (day) {
//        case 1:
//            printf("monday\n");
//            break;
//        case 2:
//            printf("tue\n");
//            break;
//        case 3:
//            printf("wed\n");
//            break;
//        case 4:
//            printf("thur\n");
//            break;
//        case 5:
//            printf("fri\n");
//            break;
//        case 6:
//            printf("sat\n");
//            break;
//        case 7:
//            printf("sund\n");
//            break;
//        default:
//            break;
//    }


//    int age;
//    cout<<"Enter age \n";
//    cin>>age;
//
//    if (age < 12 || 50 < age) {
//        cout<<"Eligible ";
//    }
//    else
//        cout<<" Not Eligible ";

    //... Find max number in three number
    
//    int a,b,c;
//    cout<<"Enter abc values \n";
//    cin>>a>>b>>c;
//
//    if (a>b && a>c) {
//        cout<<"a is greater than b,c";
//    }
//    else{
//        if (b>c) {
//            cout<<"b is greater than a,b";
//        }
//        else
//            cout<<"c is greater than a,b";
//    }

    //...Grades of student marks
    
//    int m1,m2,m3,total;
//    float avg;
//
//    cout<<"Enter student marks \n";
//    cin>>m1>>m2>>m3;
//
//    total = m1+m2+m3;
//    avg = total/3.0;
    
//    if (avg > 60) {
//        cout<<"First class \n";
//    }
//    else if (35 < avg && avg < 60){
//        cout<<"Second class \n";
//    }
//    else{
//        cout<<"not qualified";
//    }
    
    
//    int marks;
//    cout<<"Enter marks \n";
//    cin>>marks;
//
//    if (35 < marks && 60 > marks) {
//        cout<<"number is between 35 and 60 marks \n";
//    }
//    else
//    {
//        cout<<"wrong";
//    }
//
    
//    int amount;
//    cout<<"Enter amount to get discount \n";
//    cin>>amount;
//
//    if (amount >= 5000) {
//        cout<<"Discount is 20 % \n";
//    }
//    else if (2000 <= amount && amount <= 5000)
//    {
//        cout<<"Discount is 10 % \n";
//    }
//    else if (amount < 2000 && 500 < amount)
//    {
//        cout<<"Discount is 5 % \n";
//    }
//    else{
//        cout<<"No Discount \n";
//    }
    
    
//    int days;
//    cout<<"Enter day number \n";
//    cin>>days;
    
//    if (days == 1 ) {
//        cout<<"monday";
//    }
//    else if (days == 2 ) {
//        cout<<"tuesday";
//    }
//    else if (days == 3 ) {
//        cout<<"wednesday";
//    }else if (days == 4 ) {
//        cout<<"thursday";
//    }else if (days == 5 ) {
//        cout<<"friday";
//    }else if (days == 6 ) {
//        cout<<"saturday";
//    }
//    else  {
//        cout<<"sunday";
//    }
    
    //...In Switch
//    switch (days) {
//        case 1:
//            cout<<"Monday \n";
//            break;
//        case 2:
//            cout<<"Tuesday \n";
//            break;
//        case 3:
//            cout<<"wednesday \n";
//            break;
//        case 4:
//            cout<<"thursday \n";
//            break;
//        case 5:
//            cout<<"friday \n";
//            break;
//        case 6:
//            cout<<"saturday \n";
//            break;
//        case 7:
//            cout<<"sunday \n";
//            break;
//
//        default:
//            break;
//    }

    
    int a=4,b=20;
    
    int c = a+b;
    if (c>10) {
        cout<<"Enterd conditon = "<<c<<endl;
    }
   else
   {
       cout<<"Not entered ";
   }
    
    return 0;
}































































