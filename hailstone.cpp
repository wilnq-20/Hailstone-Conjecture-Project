#include <iostream>
using namespace std; 

int main() {

int userNum;
int sLength = 1; 

cout << "Please enter a number: " << endl;
cin >> userNum;

while (userNum > 1){
  cout << " " << userNum << " ";
  sLength = sLength + 1; 

  if (userNum % 2 == 0) {
    userNum = userNum / 2;  
  }
  else {
    userNum = (userNum * 3) + 1; 
  } 
}
cout << " 1"; 
cout << endl << "Sequence Length: " << sLength; 

}