#include <iostream>
using namespace std;
int main()
{
	int arl,sum;
    float avg;
    cin>>arl;
    int *arr= new int[arl];
    for(int i=0;i<arl;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arl;i++){
        sum+=arr[i];
    }
    avg=(float)sum/arl;
    cout<<"sum = "<<sum<<" avg= "<<avg<<"\n";
    delete[] arr;
	return 0;
}
