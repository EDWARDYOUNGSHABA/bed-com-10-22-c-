#include<iostream>
#include<algorithm>
using namespace std;
void swapnumbers(int& x, int& y);
int main(){

int varA = 25;
int varB = 100;

cout << "varA before swap: " << varA << endl; //varA is 25
cout << "VarB before swap: " << varB << endl; //varB is 100
swapnumbers(varA, varB);

cout << "varA after swap:"<<varA<<endl;
cout << "VarB after swap: " << varB << endl; //varB is 25

}
void swapnumbers(int& x, int& y){

    int temp;
    temp = x;
    x = y;   
    y = temp;

}