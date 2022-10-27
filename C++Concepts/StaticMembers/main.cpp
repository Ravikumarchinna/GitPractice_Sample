//
//  main.cpp
//  StaticMembers
//
//  Created by Ravikumar on 25/08/22.
//

#include <iostream>

using namespace std;


class Test
{
    
private:
    int a,b;
public:
     static int count;
    
    Test()
    {
        a = 10;
        b = 20;
        count++;
    }
    
    static int func(){
        return  count;
    }
};
 int Test::count=0;



int main() {

    Test t;
    cout<<"Count :"<<t.func()<<endl;
    Test t1;
    cout<<"Count :"<<t1.func()<<endl;


    return 0;
}
