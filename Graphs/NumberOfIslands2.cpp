int findParent(int i,vector<int>&parent){
    if(i==parent[i]) return i;
    return parent[i] = findParent(parent[i],parent);
}
vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
    // code here
    int s = n*m;
    vector<int> visited(s,0);
    vector<int> parent(s);
    vector<int> size(s,1);
    vector<int> ans;
    vector<vector<int>> arr = { {0,1},{0,-1},{-1,0},{1,0} };
    int islands=0;
    int last = 0;
    for(int i=0;i<parent.size();i++){ parent[i]=i;}
    for(int i=0;i<operators.size();i++){
        islands = last;
        int num = operators[i][0]*m + operators[i][1];
        if(visited[num]==1) {
            ans.push_back(islands);
            last = islands;
            continue;
        }
        visited[num]=1;
        islands++;
        int flag = 0;
        int cnt = 0;
        for(vector<int> ar:arr){
            int row = operators[i][0]+ar[0];
            int col = operators[i][1]+ar[1];
            int num2 = row*m + col;
            if( row>=0 && row<n && col>=0 && col<m && visited[num2]==1 ){

                int ulp_1 = findParent(num,parent);
                int ulp_2 = findParent(num2,parent
                );
                if(ulp_1 != ulp_2){
                    islands--;
                   if(size[ulp_1] >size[ulp_2]){
                       parent[ulp_2] = ulp_1;
                       size[ulp_1] += size[ulp_2]; 
                   } else{
                     parent[ulp_1] = ulp_2;
                     size[ulp_2] += size[ulp_1];   
                   }
                }
            }


        }
         ans.push_back(islands);
            last = islands;


    }
    return ans;
}