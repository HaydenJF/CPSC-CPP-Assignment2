//Problem 4 Assignment 2
#include <iostream>
#include <cmath>

using namespace std;

//method that updates meters and centimeters based on user input
void userInput(int &m, int &c) {
  do {
    cout << "How many meters?" << endl;
    cin >> m;
  } while (m < 0);
  do {
    cout << "How many centimeters?" << endl;
    cin >> c;
  } while (c < 0);

}

//function that calculates feet and inches based on meters and centimeters
void calc(int &m, int &c, double &f, double &i){
  int tempC = m*100+c;
  double tempI = tempC/2.54;
  i = fmod(tempI, 12);
  f = (int)(tempI / 12);
}

//prints out meters and centimeters given by user input and feet and inches that are calculated
void output(double m, double c, double f, double i){
  cout << "You gave " << m << " meters and " << c << " centimeters." << endl;
  cout << "That is " << f << " feet and " << i << " inches." << endl;
}


//main method that allows for users to repeat the program
int main (int argc, char **argv)
{
  int m = 0;
  int c = 0;
  double f = 0;
  double i = 0;
  string end = "";
  do{
    userInput(m, c);
    calc(m, c, f, i);
    output(m, c, f, i);
    cout << "type \"exit\" to exit" << endl;
    cin >> end;
  } while (end != "exit");

  return 0;
}
