#include <iostream>
#include "swap.h"
using namespace std;
int main(){

int varA = 25;
int varB = 100;

cout << "varA before swap: " << varA << endl; //varA is 25
cout << "VarB before swap: " << varB << endl; //varB is 100
swapnumbers(varA, varB);

cout << "varA after swap:"<<varA<<endl;
cout << "VarB after swap: " << varB << endl; //varB is 25

}