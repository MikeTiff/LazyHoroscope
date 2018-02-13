//Authors: Michael Tiffany
#include<iostream>
#include<string>

using namespace std;

int main()

{
  string First, Last;
  int Lucky = 0;
  //declare variables
  cout<< "Please enter your fist name.\n";
  cin>> First;
  cout<< "Please enter your last name.\n";
  cin>> Last;
  //get user input
  cout<< "Welcome, "<<First[0]<<Last[0]<<", here is your fortune\n";
  //tell fortune
  Lucky = ((First.length())+Last.length());
  cout<< "Your lucky number is "<< Lucky<< endl;
  return 0;
}
