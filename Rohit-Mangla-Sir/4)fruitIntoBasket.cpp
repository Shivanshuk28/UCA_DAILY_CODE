#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> basket;
    int left = 0;
    int max_fruits = 0;

    for (int right = 0; right < fruits.size(); ++right) {
        basket[fruits[right]]++;
        while (basket.size() > 2) {
            basket[fruits[left]]--;
            if (basket[fruits[left]] == 0) {
                basket.erase(fruits[left]);
            }
            left++;
        }
        max_fruits = std::max(max_fruits, right - left + 1);
    }
    return max_fruits;
}

int main() {
    vector<int> fruits = {1, 2, 3, 2, 2};
    cout<<totalFruit(fruits);
    return 0;
}

