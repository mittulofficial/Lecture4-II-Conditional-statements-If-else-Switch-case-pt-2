//
//  main.cpp
//  Lecture4 I: Conditional statements
//
//  Created by MITTUL KUMAR on 26/06/23.
//

#include <iostream>
using namespace std;
int main()
{
   
    float a,b;
    cout<<"give 2 floating point numbers as input"<<endl;
    cin>>a>>b;
    if(a>0.01 && b>a)
    {
        cout<<"the condition in if statement is correct";
    }
    else{
        cout<<"this statement is false";
    }
    return 0;
}
