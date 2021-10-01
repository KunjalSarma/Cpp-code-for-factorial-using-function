//Find	the	row	with	maximum	number	of	1’s.
//https://practice.geeksforgeeks.org/problems/row-with-max-1s/0
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int hash[n]={0};
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                hash[i]++;
	                flag=true;
	            }
	        }
	    }
	    int ind=0,maxi=hash[0];
	    for(int i=0;i<n;i++){
	        if(hash[i]>maxi){
	            maxi=hash[i];
	            ind=i;
	        }
	    }
	    if(!flag){
	        return -1;
	    }
	    return ind;
	}
	
	
//Algo2 (better time complexity O(m+n)
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int r = 0, c = m - 1, curcount = 0, max_count = 0, rno = 0;
	while (r < n && c >= 0) {
		if (arr[r][c] == 1) {
			c--;
			curcount++;
		} else {
			r++;
		}
		if (curcount > max_count) {
			max_count = curcount;
			rno = r;
		}
	}
	if(curcount==0){
	    return -1;
	}
	return rno;
	}

