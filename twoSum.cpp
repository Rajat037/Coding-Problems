#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            // Return i+1 , since id=ndex starts from 0;
            return {left + 1, right + 1};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return {};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};  
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers are: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
