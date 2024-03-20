// class Solution {
// public:
//     void DFS(vector<vector<int>>& image,int row,int col,int color,int initial){
//         int rows = image.size();
//         int cols = image[0].size();
//         //base case 
//         if(row>=rows || col>=cols || row<0 || col<0 || image[row][col]!=initial) return;
//         //processing + recursive calls 
//         image[row][col] = color;
//         DFS(image,row+1,col,color,initial);
//         DFS(image,row-1,col,color,initial);
//         DFS(image,row,col+1,color,initial);
//         DFS(image,row,col-1,color,initial);

//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int initial = image[sr][sc];
//         if(initial == color) return image;
//         DFS(image,sr,sc,color,initial);
//         return image;
//     }
// };