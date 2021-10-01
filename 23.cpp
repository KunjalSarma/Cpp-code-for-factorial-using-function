//https://practice.geeksforgeeks.org/problems/two-repeated-elements/0
//Find	the	two	repetitive	elements	in	a	given	array.
pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
        pair<int,int>p1;
        vector<int>v1;
        for(int i=0;i<N+2;i++){
            if(arr[abs(arr[i])]>0){
                arr[abs(arr[i])]=-arr[abs(arr[i])];
            }else{
                v1.push_back(abs(arr[i]));
            }
        }
        p1.first=v1[0];
        p1.second=v1[1];
        // for(auto a:v1){
        //     cout<<a<<" ";
        // }
        return p1;
    }
