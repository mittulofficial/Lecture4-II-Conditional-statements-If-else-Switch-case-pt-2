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
    int a;
    cout<<"enter a integer a";
    cin>>a;
    switch (a) {
        case 1:
            cout<<"the value of a is 1";
            break;
        case 2:
            cout<<"the value of a is 2";
            break;
            
        default:
            cout<<"default will always be printed";
            break;
    }
    return 0;
    
}
