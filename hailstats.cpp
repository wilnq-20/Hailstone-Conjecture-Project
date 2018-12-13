#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int minRange; 
  int maxRange;

  int count = 0;
  int smallNum = 2000000000; 
  int largeNum = 0;
  int smallLength = 2000000000;
  int largeLength = 0;   
  int bnum; 

  cout << "Enter Min Range: " << endl; 
  cin >> minRange; 
  cout << "Enter Max Range: " << endl; 
  cin >> maxRange; 


  for (int i = minRange; i <= maxRange; ++i) {
    bnum = i; 
    count = 0; 
    while (bnum != 1) {
      if (bnum % 2 == 0) {
        bnum = bnum / 2;
        count = count + 1; 
      }
      else {
        bnum = (bnum * 3) + 1; 
        count = count + 1; 
      }
    }
    if (count > largeLength) {
      largeLength = count;
      
      if (i > largeNum) {
        largeNum = i;  
      }
    }
    if (count < smallLength) {
      smallLength = count;
      smallNum = i;  
    }
  }
  
  cout << "Minimum Length: " << smallLength << endl; 
  cout << "Achieved by: " << smallNum << endl;
  cout << "Maximum Length: " << largeLength << endl; 
  cout << "Achieved by: " << largeNum << endl; 

return 0;
}
 
