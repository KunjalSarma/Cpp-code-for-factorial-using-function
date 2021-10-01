//Array Subset of another array
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++){
        m1[a1[i]]++;
    }
    bool flag=true;
    for(int i=0;i<m;i++){
        if(m1[a2[i]]==0){
            flag=false;
        }
    }
    if(flag){
        return "Yes";
    }
    return "No";
}
