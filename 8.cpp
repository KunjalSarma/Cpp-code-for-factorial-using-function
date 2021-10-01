//Find	the	first	repeating	element	in	an	array	of	integers.
int firstRepeated(int arr[], int n) {
        //code here
         unordered_map<int,int> m;
    
    int i;
    
    for(i = 0; i<n; i++) m[arr[i]]++;
    
   for(int i=0;i<n;i++){
       if(m[arr[i]]>1)
            return i+1;
   }
   return -1;
    }
