// C++ program to demonstrate alignof operator 
#include <iostream> 
using namespace std; 

struct Geeks { 
	int i = 5; 
	float f = 5.5; 
	char s ='A'; 
}; 

struct Empty { 
}; 

// driver code 
int main() 
{ 
	cout << "Alignment of char: " << alignof(char) << endl; 
	cout << "Alignment of pointer: " << alignof(int*) << endl; 
	cout << "Alignment of float: " << alignof(float) << endl; 
	cout << "Alignment of class Geeks: " << alignof(Geeks) << endl; 
	cout << "Size of class Geeks: " << sizeof(Geeks) << endl; 
	cout << "Alignment of Empty class: " << alignof(Empty) << endl; 
    int i = 10;
    float j = 20.12;
    char A = 'A';
    cout << "Size of int i: " << sizeof(i) << endl; 
	cout << "Size of float j: " << sizeof(j) << endl;    
	cout << "Size of char A: " << sizeof(A) << endl;    

	return 0; 
} 
