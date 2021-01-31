//Problem 3 Assignment 2
#include <iostream>

using namespace std;

//method that calculates the cost when taxed
float addTax(float taxRate, float cost){
  return (1+taxRate)*cost;
}

//main gets cost and tax rate then calls method to calculate cost when taxed
int main (int argc, char **argv)
{
  if (argc > 1){
		cout << "No parameters needed." << endl;
	}
  float cost;
  float taxRate;
  cout << "What is the cost?" << endl;
  cin >> cost;
  cout << "what is the tax rate?" << endl;
  cin >> taxRate;
  cout.precision(2);
  cout << "The cost with tax is: " << fixed << addTax(taxRate, cost) << endl;


  return 0;
}
