/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
template <typename T>

void max_num(T a,T b){
    if(a > b){
        cout <<a;
    }else{
        cout<<b;
    }
}
int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    int b;
    cin>>b;
    
    max_num(a,b);

    return 0;
}