#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0;
    int end = numbers.size() - 1;

    while (start < end) {
        int sum = numbers[start] + numbers[end];

        if (sum == target) {
            return {start + 1, end + 1};
        }
        else if (sum < target) {
            start++;
        }
        else {
            end--;
        }
    }

    return {};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices: ";
        cout << result[0] << ", " << result[1] << endl;
    }
    else {
        cout << "No pair found." << endl;
    }

    return 0;
}
