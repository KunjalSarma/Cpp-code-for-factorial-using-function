# include<iostream>
using namespace std;
class number {
private:
    int n;//so that number variable can only be initialized from the constructor
public:
    number(int num) {
        n = num;//Initializing the number for which the factorial is being calculated
    }
    int factorial() {
        int i, fac = 1;//i is for running the loop and fac is the factorial
        for(int i = 1; i <= n; i++) {
            fac = fac * i;
        }
        return fac;
    }
};
int main() {
    int k = 1;
    while(k == 1) {
        int num;
        cout<<"The number for which you wish to calculate the factorial"<<endl;
        cin>>num;
        number obj(num);//Making an object of number class
        cout<<"Factorial of "<<num<<" is "<<obj.factorial()<<endl;//for printing the factorial
        cout<<"If you wish to calculate of some other number press 1 else press any other number."<<endl;
        cin>>k;
    }
    return 0;
}
