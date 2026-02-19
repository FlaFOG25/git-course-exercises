/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int main() {
	int a = 0;
	cout <<"insert the first number: ";
	cin >> a;
	int b = 0;
	cout <<"insert the second number: ";
	cin >> b;
	int c = a + b;
	cout << "La somma di " << a << " e " << b << " è: " << c << endl; return 0;
}