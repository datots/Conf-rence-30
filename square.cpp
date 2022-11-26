/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


template<typename T>
void square(T a){
    T b = a*a;
    
    cout<<"Squared nuber: "<<b<<endl;
    
    
    
}

int main()
{   
    int a;
    cout<<"Enter number: ";
    cin>>a;
    
    double b;
    cout<<"Enter number: ";
    cin>>b;
    
    square(a);
    square(b);
    return 0;
}