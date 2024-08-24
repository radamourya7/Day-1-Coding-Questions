Ques- 03 Write a C++ program that takes an integer as input from the user and outputs its square.

Sample Input:- Enter a number: 7

Sample Output :- The square of 7 is: 49


CODE:=
  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int square=n*n;
    cout<<"The square of "<<n<<" is: "<<square;
    return 0;
}
