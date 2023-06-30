//
//  main.cpp
//  Lecture4 2: Conditional statements
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
    if(marks<90 && marks>80)
    {
        cout<<"b";
    }
    if(marks<80 && marks>70)
    {
        cout<<"c";
    }
    if(marks<70 )
    {
        cout<<"pass";
    }
    return 0;
}
