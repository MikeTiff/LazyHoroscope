//Authors: Michael Tiffany
#include<iostream>
#include<string>

using namespace std;

int main()

{
  string First, Last;
  int Lucky = 0, Fame = 0, Love = 0;
  cout<< "What is your fist name?\n";
  cin>> First;
  cout<< "What is your last name?\n";
  cin>> Last;
  cout<< "Welcome, "<<First[0]<<"."<<Last[0]<<"., here is your fortune...\n";
  Lucky = ((First.length())+Last.length());
  cout<< "your lucky number is "<< Lucky<< endl;
  Fame = First[0];
  int Lover = Last.length();
  Love = Last[Lover-1];
  if(Fame==69||Fame==65||Fame==73||Fame==79||Fame==85||Fame==97||Fame==101
    ||Fame==105||Fame==111||Fame==117)
    {cout<<"you are destined to be famous!"<<endl;}
  else{ cout<<"you should keep a low profile.\n";}
  if(Love==69||Love==65||Love==73||Love==79||Love==85||Love==97||Love==101
      ||Love==105||Love==111||Love==117)
    {cout<< "you have already met your true love."<<endl;}
  cout << "have a good day!"<<endl;
  return 0;
  }
