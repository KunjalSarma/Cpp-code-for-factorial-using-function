//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0
//three sum (two pointer approach)
 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            int z=X-A[i];
            if(z>=0){
                int j=i+1,k=n-1;
                while(j<k){
                    if(A[j]+A[k]>z){
                        k--;
                    }else if(A[j]+A[k]<z){
                        j++;
                    }else{
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
