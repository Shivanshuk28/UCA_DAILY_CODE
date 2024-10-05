#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, vector<int>& aux, int left, int mid, int right) {
    // Copy the elements from arr to aux
    for (int k = left; k <= right; k++) aux[k] = arr[k];

    int i = left;
    int j = mid + 1;
    
    // Merge the two halves back into arr
    for (int k = left; k <= right; k++) {
        if (i > mid) {
            arr[k] = aux[j++];
        } else if (j > right) {
            arr[k] = aux[i++];
        } else if (aux[i] <= aux[j]) {
            arr[k] = aux[i++];
        } else {
            arr[k] = aux[j++];
        }
    }
}

void merge_sort_r(vector<int>& arr, vector<int>& aux, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;

    // Recursively sort the two halves
    merge_sort_r(arr, aux, left, mid);
    merge_sort_r(arr, aux, mid + 1, right);

    // Merge the sorted halves
    merge(arr, aux, left, mid, right);
}

void merge_sort(vector<int>& arr) {
    int n = arr.size();
    vector<int> aux(n);
    merge_sort_r(arr, aux, 0, n - 1);
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    merge_sort(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
