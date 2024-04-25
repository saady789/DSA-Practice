class Solution {
public:
    int findParent(int i, vector<int>& parent) {
        if (i == parent[i])
            return i;
        return parent[i] = findParent(parent[i], parent);
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int size = accounts.size();
        vector<int> parent(size);
        vector<vector<string>> emailLists(size);
        unordered_map<string, int> emailToIndex;

        // Initialize parent and emailToIndex
        for (int i = 0; i < size; ++i) {
            parent[i] = i;
            for (int j = 1; j < accounts[i].size(); ++j) {
                if (emailToIndex.find(accounts[i][j]) == emailToIndex.end()) {
                    emailToIndex[accounts[i][j]] = i;
                } else {

                    int root1 = findParent(i, parent);
                    int root2 =
                        findParent(emailToIndex[accounts[i][j]], parent);

                    parent[root2] = root1;
                }
            }
        }

        // Group emails by their root parent
        for (const auto& entry : emailToIndex) {
            int root = findParent(entry.second, parent);
            emailLists[root].push_back(entry.first);
        }

        // Format the answer
        vector<vector<string>> ans;
        for (int i = 0; i < size; ++i) {
            if (!emailLists[i].empty()) {
                sort(emailLists[i].begin(), emailLists[i].end());
                vector<string> account = {accounts[i][0]};
                account.insert(account.end(), emailLists[i].begin(),
                               emailLists[i].end());
                ans.push_back(account);
            }
        }

        return ans;
    }
};
