//
//  main.cpp
//  TemplateFuncClass
//
//  Created by Ravikumar on 11/10/22.
//

#include <iostream>
using namespace std;

//Preprocessor Directives / Macros and Naming Space

namespace First {

void func1()
{
    cout<<"First"<<endl;
}
}

namespace Second {

void func1()
{
    cout<<"Second"<<endl;
}

}

int main() {
    
    First::func1();
    Second::func1();
    
    return 0;
}
