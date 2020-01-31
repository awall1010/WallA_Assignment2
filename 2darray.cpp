// Write code that will fill the array a (declared below) with numbers typed in at
// the key- board. The numbers will be input five per line, on four lines (although your solution need not
// depend on how the input numbers are divided into lines).
// int a[4][5];
#include<iostream>
using namespace std;
#define ROW_SIZE 4 //define row size
#define COLUMN_SIZE 5 //define column size

int main(int argc, char const *argv[]) {
  int a[ROW_SIZE][COLUMN_SIZE]; //initialize the array
  int num;
  for(int i = 0;i<ROW_SIZE;++i ){ //loop through rows
    for(int j=0;j<COLUMN_SIZE;++j){ //loop through columns
      cout<<"Enter a number to fill the array with row size 4 and column size 5: "<<endl;
      cin>>num;
      a[i][j]=num;
    }
  }
  cout<< "here is the array: "<< endl;
  for(int i = 0; i<ROW_SIZE;++i){ //loop to print out the array
    for(int j = 0;j<COLUMN_SIZE;++j){
      cout<< a[i][j]<<endl;
    }
  }
  return 0;
}
