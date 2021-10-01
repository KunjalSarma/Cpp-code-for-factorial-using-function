//Find	longest	consecutive	subsequence.
int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int maxe=arr[0];
      for(int i=0;i<N;i++){
          if(arr[i]>maxe)
            maxe=arr[i];
      }
      int hash[maxe+1]={0};
      for(int i=0;i<N;i++){
          hash[arr[i]]++;
      }
      int ctr=0,maxctr=0;
      for(int i=0;i<maxe+1;i++){
          if(hash[i]==0){
              ctr=0;
          }else{
              ctr++;
          }
          maxctr=max(ctr,maxctr);
      }
      return maxctr;
    }
