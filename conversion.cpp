// Problem 5 (conversion.cpp): Write a program that will read in a length in feet
// and inches and output the equivalent length in meters and centimeters.
// Use at least three functions: one for user input, one or more for calculating,
// and one for output(console). Include a loop that lets the user repeat this
// computation for new input values until the user says he or she wants to end
// the program (user has to type exit). There are 0.3048 meters in a foot,
// 100 centimeters in a meter, and 12 inches in a foot.

#include<iostream>
using namespace std;

void output(double meters, double centimeters){ //define output function with meters and centimeters as parameters
cout<<"height in meters: "<<meters<<endl; //print out conversions
cout<<"height in centimeters: "<<centimeters<<endl;
}

void calculate(double totalInches) { //define calculation functiion
  double meters =(totalInches/12)*.3048; //perform the calculations
  double centimeters=totalInches*2.54;
  output(meters,centimeters); //call output function to print values
}

void userInput(){ //define user input function
  string exit = " ";//string for user to exit
  double feetHeight;
  double inchesHeight;
  double totalInches;
  while(exit!="exit"){ //prompt user for feet and inches
    cout<<"enter 'exit' if you would like to exit or anything other string to continue: "<<endl;
    cin>> exit;
    cout<< "Enter feet: " << endl;
    cin>> feetHeight;
    cout<<"Enter inches: "<< endl;
    cin>>inchesHeight;
    totalInches = (feetHeight*12) + inchesHeight; //calculate total inches
    calculate(totalInches); //call calculate function
  }
}


int main(int argc, char const *argv[]) {
  double meters; //define all variables in main
  double centimeters;
  double feetHeight;
  double inchesHeight;
  double totalInches;
  userInput();//call user input which calls calculate and output
  return 0;
}
