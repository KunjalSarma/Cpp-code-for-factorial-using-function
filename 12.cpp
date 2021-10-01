//Find	if	there	is	any	subarray	with	sum	equal	to	zero
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]+arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        if(m[0]>0)
            return true;
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>1)
                return true;
        }
        return false;
    }
