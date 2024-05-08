class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // Copy the 'score' vector to 'arr'
vector<int> arr = score;
// Get the size of the 'score' vector
int n = score.size();
// Sort the 'arr' vector in descending order
sort(arr.begin(), arr.end(), greater<int>());
// Create a map 'mpp' with keys as integers and values as integers, ordered in descending order
map<int, int, greater<int>> mpp;
// Iterate through the 'arr' vector and assign ranks to elements based on their position
for (int i = 0; i < n; i++) {
    mpp[arr[i]] = i + 1;
}
// Initialize a vector 'ans' to store the result
vector<string> ans;
// Iterate through the 'score' vector
for (int i = 0; i < n; i++) {
    // Convert the rank stored in 'mpp' corresponding to 'score[i]' to a string and push it to 'ans'
    ans.push_back(to_string(mpp[score[i]]));
    // Assign special labels based on the rank
    if (ans[i] == "1") {
        ans[i] = "Gold Medal";
    } else if (ans[i] == "2") {
        ans[i] = "Silver Medal";
    } else if (ans[i] == "3") {
        ans[i] = "Bronze Medal";
    }
}
// Return the 'ans' vector
return ans;

    }
};