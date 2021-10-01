 //Kadane's algorithm
 int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int global,current;
        global=current=arr[0];
        for(int i=1;i<n;i++){
            current=max(arr[i],current+arr[i]);
            if(global<current)
                global=current;
        }
        return global;
    }
