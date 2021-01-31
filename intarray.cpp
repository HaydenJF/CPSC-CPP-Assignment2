//Problem 1 Assignment 2
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  if (argc > 1){
		cout << "No parameters needed." << endl;
	}
  //gets total amount of people (for array)
  cout << "How many numbers do you want(no more than 10)?" << endl;
  int tot = 0;
  cin >> tot;
  while (tot <= 0 || tot > 10) {
    cout << "Give good input." << endl;
    cin >> tot;
  }
  int numberArray[tot];
  //fills array with nonnegative integers
  for (int i = 0; i < tot; ++i) {

    cout << "Give a number." << endl;
    int n = 0;
    cin >> n;
    if (n < 0) {
      cout << "A positive number." << endl;
      i--;
      continue;
    }
    numberArray[i] = n;
  }
  //prints array
  for (int i = 0; i < tot; ++i) {
    cout << numberArray[i] << " ";
  }
  cout << endl;


  return 0;
}
