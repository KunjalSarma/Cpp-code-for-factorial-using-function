#include <iostream>
using namespace std;
int * rev(int arr[],int size){
    int *p;
    p= new int[size];
    for(int i=size-1,j=0;i>=0;i--){
        p[j]=arr[i];
        j++;
    }
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
