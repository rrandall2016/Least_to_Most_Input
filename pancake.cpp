
//great sorting
#include <iostream>
#include <algorithm>
using namespace std;
//pancake is actually drinks haha//
int main() 
{
  int largest;
  int smallest;
  int pancake[5];
  int n = sizeof(pancake)/sizeof(pancake[0]);


  cout << "Enter the number of drinks your friends had for breakfast, for 5 people. \n";

   for(int i = 0; i < 5; i++) {
      cout<<"Drinks for friend "<<(i+1)<< ": ";
      cin>>pancake[i];
   }
  
  largest = pancake[0];

  for (int i = 1; i < 5; i++) {
    if(largest < pancake[i])
       largest = pancake[i];
  }

   cout << "Largest amount of drinks had was: \n" << largest << "\n"; 

  smallest = pancake[0];

  for (int i = 1; i < 5; i++) {
    if(smallest > pancake[i])
       smallest = pancake[i];
  }

  cout << "Smallest amount of drinks had was: \n" << smallest << endl << "They should probably be driving." << endl;
  cout << "Least to most drinks : ";
  sort(pancake, pancake+n);

  for (int i = 0; i < n; ++i)
      cout << pancake[i] << " ";


 



  return 0;
}