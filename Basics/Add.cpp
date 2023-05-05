#include <iostream>
#include<math.h>

using namespace std;

// int main()
// {
// 	int a;
// 	char ch[80];
	
// 	// Enter input from user
// 	// - 4 for example
// 	cin >> a;
	
// 	// Get input from user -
// 	// "GeeksforGeeks" for example
// 	cin.getline(ch,80);
	
// 	// Prints 4
// 	cout << a << endl;
	
// 	// Printing string : This does
// 	// not print string
// 	cout << ch << endl;
	
// 	return 0;
// }

// C++ Code to explain how
// "cin.ignore(numeric_limits
// <streamsize>::max(),'\n');"
// discards the input buffer
// #include<iostream>

// // for <streamsize>
// #include<ios>	

// // for numeric_limits
// #include<limits>
// using namespace std;

// int main()
// {
// 	int a;
// 	char str[80];
	
// 	// Enter input from user
// 	// - 4 for example
// 	cin >> a;
	
// 	// discards the input buffer
// 	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	
// 	// Get input from user -
// 	// GeeksforGeeks for example
// 	cin.getline(str, 80);
	
// 	// Prints 4
// 	cout << a << endl;
	
// 	// Printing string : This
// 	// will print string now
// 	cout << str << endl;

// 	return 0;
// }
// Operators in C++
#include<iostream>
using namespace std;

int main(){
	int a=10, b=5;
	// Arithmetic operators
	cout<<"Following are the Arithmetic operators in C++"<<endl;
	cout<<"The value of a + b is "<<a+b<<endl;
	cout<<"The value of a - b is "<<a-b<<endl;
	cout<<"The value of a * b is "<<a*b<<endl;
	cout<<"The value of a / b is "<<a/b<<endl;
	cout<<"The value of a % b is "<<a%b<<endl;
	cout<<"The value of a++ is "<<a++<<endl; // First print (a) and then increment it by 1
	cout<<"The value of a-- is "<<a--<<endl; // First print (a+1) and then decrease it by 1
	cout<<"The value of ++a is "<<++a<<endl; // Increment (a) by (a+1) and then print
	cout<<"The value of --a is "<<--a<<endl; // Decrement (a+1) by (a) and then print
	cout<<endl;

	// Assignment Operators --> used to assign values to variables
	// int a =3, b=9;
	// char d='d';

	// Comparison operators
	// Output of all these comparison operators will be (1) if it is true and (0) if it is false
	cout<<"Following are the comparison operators in C++"<<endl;
	cout<<"The value of a == b is "<<(a==b)<<endl;
	cout<<"The value of a != b is "<<(a!=b)<<endl;
	cout<<"The value of a >= b is "<<(a>=b)<<endl;
	cout<<"The value of a <= b is "<<(a<=b)<<endl;
	cout<<"The value of a > b is "<<(a>b)<<endl;
	cout<<"The value of a < b is "<<(a<b)<<endl;
	cout<<endl;
	// Logical operators
	cout<<"Following are the logical operators in C++"<<endl;
	cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
	cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
	cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;


	return 0;
}
// This code is contributed by Suruchi Kumari
