#include <iostream>//factorial using fuction
#include <conio.h>
using namespace std;
int main()
{
    cout << "Enter the number to find factorial" << endl;
    void factorial();
    factorial();//call the metod 
    getch();
    return 0;
}
void factorial(){//define a user define method to find factorial
int fact=0,n,i;
cin>>n;//get input from user
for(i=1; i<=n; i--){
   fact=fact*i;//find factorial using for loop
}
   cout<<"Factorial of "<<n<<" is: "<<fact
     //display factorial
}