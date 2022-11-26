/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(void) {

	int x; 
    int sum = 0;
    int size = 5;
    int avg = 0;
	int *array{ new int[size]{ 10, 7, 15, 3, 11 } };

	cout << "Array elements: " << endl;

	for (x = 0; x < 5; x++) {

		cout << array[x] << endl;
	}
	
	for(int i = 0; i < size; i++){
	    sum = sum + array[i];
	    }
	    
	    avg = sum / 5;
    cout << "The sum is: "<<sum<<endl;
    cout<<"The average is: "<<avg<<endl;
	return 0;
}