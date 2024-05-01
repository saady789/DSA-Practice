

class Solution {
public:
    int findParent(int i, vector<int>& parent) {
        if (i == parent[i]) return i;
        return parent[i] = findParent(parent[i], parent);
    }

    int removeStones(vector<vector<int>>& stones) {
        int maxRow = INT_MIN;
        int maxCol = INT_MIN;

        // Find the maximum row and column numbers
        for (const auto& stone : stones) {
            maxRow = max(maxRow, stone[0]);
            maxCol = max(maxCol, stone[1]);
        }
        maxRow++;
        maxCol++;

        // Initialize parent vector and size vector
        int total = maxRow + maxCol ; // Add 2 to cover both rows and columns
        vector<int> parent(total);
        vector<int> size(total, 1);
        for (int i = 0; i < total; ++i) {
            parent[i] = i;
        }

        // Union find algorithm
        for (const auto& stone : stones) {
            int row = stone[0];
            int col = stone[1] + maxRow ; // Shift column index to avoid conflicts with row indices
            int parentRow = findParent(row, parent);
            int parentCol = findParent(col, parent);
            if (parentRow != parentCol) {
                if (size[parentRow] > size[parentCol]) {
                    parent[parentCol] = parentRow;
                    size[parentRow] += size[parentCol];
                } else {
                    parent[parentRow] = parentCol;
                    size[parentCol] += size[parentRow];
                }
            }
        }

        // Count the number of disjoint sets
        int disjointSets = 0;
        for (int i = 0; i < total; ++i) {
            if(parent[i]==i && size[i]==1) continue;
            if (parent[i] == i) {
                disjointSets++;
            }
        }

        // Number of stones minus the number of disjoint sets is the maximum number of stones we can remove
        return stones.size() - disjointSets;
    }
};
