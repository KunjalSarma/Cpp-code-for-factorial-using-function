#include <iostream>
using namespace std;

// Reverse an array

int main()
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 4; i >=0; i--)
      cout << endl << data[i] <<endl;

   return 0;
}