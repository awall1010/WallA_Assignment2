// Write a program that will read up to ten nonnegative integers into an array
// called numberArray and then write the integers back to the screen (console output). For this exercise you
// need not use any functions.

#include<iostream>
using namespace std;
#define ARR_SIZE 10 //define array size

int main(int argc, char const *argv[]) {
  int numArray[ARR_SIZE]; //initialize the array
  cout<<"enter 10 integers: "<<endl;
  for (int i = 0;i<ARR_SIZE;++i) {//loop to populate the array
    int input;
    cout<<i+1<<": ";
    cin>> input;
    numArray[i]=input;
  }
  cout<< endl;
  for (int i = 0;i<ARR_SIZE;++i) {

    cout<<numArray[i]<<endl; //print out the array
  }

  return 0;
}
