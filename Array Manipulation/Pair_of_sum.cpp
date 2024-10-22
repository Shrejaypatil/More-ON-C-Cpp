#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};           // Array of numbers
    int sum = 9;                          // Target sum
    int n = sizeof(arr) / sizeof(arr[0]); // Correct array size calculation

    vector<vector<int>> ans;    // Vector to store result pairs
    unordered_map<int, int> mp; // Hash map to store array elements and their indices

    for (int i = 0; i < n; ++i) // Iterate over the array
    {
        int diff = sum - arr[i]; // Calculate the difference needed to reach the target sum

        // If the difference is found in the map, we found a pair
        if (mp.find(diff) != mp.end())
        {
            ans.push_back({arr[mp[diff]], arr[i]}); // Store the pair of indices
        }

        mp[arr[i]] = i; // Store the current element in the map with its index
    }

    // Output the results
    for (const auto &pair : ans)
    {
        cout << "Pair found at indices: " << pair[0] << " and " << pair[1] << endl;
    }

    return 0;
}
