//Problem 2 Assignment 2
#include <iostream>

using namespace std;

//Makes variable a and b both 0.
void zeroBoth(int &a, int &b){
  a = 0;
  b = 0;
}

//Gets user inputed a and b and prints the values after run through zeroBoth method
int main (int argc, char **argv)
{
  if (argc > 1){
		cout << "No parameters needed." << endl;
	}

  int a;
  int b;
  cout << "Give first number." << endl;
  cin >> a;
  cout << "Give second number." << endl;
  cin >> b;
  cout << endl << "Before method: " << a << " " << b << endl;
  zeroBoth(a, b);
  cout << "After method: " << a << " " << b << endl;


  return 0;
}
