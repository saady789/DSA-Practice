class Solution {
public:
    int findParent(int i,vector<int>&parent){
        if(parent[i]==i) return i;
        return parent[i] = findParent(parent[i],parent);
    }
    int largestIsland(vector<vector<int>>& grid) {
        int flag=0;
        int s = grid.size()*grid.size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==0) {
                flag=1;break;
            }    
            }
        }
        if(flag==0) return s;

        int r = grid.size();
        vector<int> parent(s);
        vector<int> size(s,1);
        vector<vector<int>> dir = { {0,1},{0,-1},{-1,0},{1,0} };
        for(int i=0;i<parent.size();i++) { parent[i]=i; }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0) continue;
                int node1 = i*r+j;
                for(vector<int> arr:dir){
                    int r1 = i+arr[0];
                    int c1 = j+arr[1];
                    if(r1>=0 && r1<r && c1>=0 && c1<r && grid[r1][c1]==1){
                        int node2 = r1*r+c1;
                        int ulp_1 = findParent(node1,parent);
                        int ulp_2 = findParent(node2,parent);
                        if(ulp_1 != ulp_2){
                            if(size[ulp_1] > size[ulp_2]) {
                                parent[ulp_2] = ulp_1;
                                size[ulp_1] += size[ulp_2];
                            } else {
                                parent[ulp_1] = ulp_2;
                                size[ulp_2] += size[ulp_1];
                            }
                        }

                    }
                }


            }
        }
        int ans = INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1) continue;
                set<int> mySet;
                for(vector<int> arr:dir){
                    int r2 = i+arr[0];
                    int c2 = j+arr[1];

                    if(r2>=0 && r2<r && c2>=0 && c2<r && grid[r2][c2] ==1 ){
                        mySet.insert(findParent(r2*r+c2,parent));
                    }
                }
                int sum = 1;
                for (auto it = mySet.begin(); it != mySet.end(); ++it) {
                    int x = *it;
                    sum += size[x];
                    }
                if(sum > ans) ans = sum;


            }
        }
        return ans;
    }
};