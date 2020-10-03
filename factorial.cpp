# include <iostream>
using namespace std;
int factorial(int n){
	if (n<0)
		return -1;
	else if (n<=1)
		return 1;
	else
		return n * factorial(n-1);
}

int main(){
	int n;
	cin >> n;
	int f = factorial(n);
	if (f==-1)
		cout << "Number is negative";
	else
		cout << f;
	return 0;
}
