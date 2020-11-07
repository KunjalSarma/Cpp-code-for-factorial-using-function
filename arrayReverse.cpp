#include <iostream>
using namespace std;
int * rev(int arr[],int size){
    int *p;
    p= new int[size];
    for(int i=0;i<size;p[i]=arr[size-i-1],i++);
    return p;
}
int main()
{   int arr[5]={1,2,3,4,5};
    int *A;
    
    A=rev(arr,5);
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
	
	return 0;
}
