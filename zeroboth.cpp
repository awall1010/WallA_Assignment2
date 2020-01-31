// Problem 3 (zeroboth.cpp): Implement a void function called zeroBoth
// that has two call-by- reference parameters, both of which are
// variables of type int, and sets the values of both variables to 0.
#include<iostream>
using namespace std;


void zeroBoth(int& x, int& y){ //call by reference parameters
  x = 0;
  y=0;
}
int main(int argc, char const *argv[]) {
  int x = 15;
  int y = 10;
  zeroBoth(x, y); //call zero both function
  cout<<"x: "<< x <<" "<<"y: "<< y<<endl;//output
  return 0;
}
