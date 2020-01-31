// Problem 4 (salestax.cpp): Implement a function called addTax. The function
// addTax has two formal parameters: taxRate, which is the amount of sales
// tax expressed as a percent; and cost, which is the cost of an item before
// tax. The function returns the value (float) of cost so that it includes sales tax.
#include<iostream>
using namespace std;

float addTax(double taxRate, double cost){ //define addTax function
  float taxDecimal = taxRate/100;
  return cost+(cost*taxDecimal); //return cost
}

int main(int argc, char const *argv[]) {
  double itemcost;
  double taxRate;
  cout<<"enter cost of item you want to add tax to: "<< endl;
  cin>> itemcost;
  cout<<"enter tax rate: "<<endl;
  cin>> taxRate;

  float finalCost = addTax(taxRate,itemcost); //call addTax function
  cout<< "final cost is: "<<finalCost<<endl;
  return 0;
}
