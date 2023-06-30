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
   
    int marks;
    cout<<"student ,please enter the marks to claculate the grade";
    cin>>marks;
    if(marks>90)
    {
        cout<<"a";
    }
    else if(marks>80)
    {
        cout<<"b";
    }
    else if(marks<80 && marks>70)
    {
        cout<<"c";
    }
   else
    {
        cout<<"pass";
    }
    return 0;
}
