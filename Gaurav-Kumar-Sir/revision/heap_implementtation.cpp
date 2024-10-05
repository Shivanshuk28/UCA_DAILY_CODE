#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
class PriorityQueue {
private:
    vector<int> pq;  // We use a vector for dynamic array-like behavior
    int n;

    void exch(int i, int j) {
        int temp = pq[i];
        pq[i] = pq[j];
        pq[j] = temp;
    }

    void swim(int k) {
        while (k > 1 && pq[k / 2] <= pq[k]) {
            exch(k, k / 2);
            k = k / 2;
        }
    }

    void sink(int k) {
        while (2 * k <= n) {
            int j = 2 * k;
            if (j < n && pq[j] < pq[j + 1]) j++;
            if (pq[k] >= pq[j]) break;
            exch(k, j);
            k = j;
        }
    }

public:
    // Constructor
    PriorityQueue(int capacity) : n(0) {
        pq.resize(capacity + 1);  // Allocate enough space
    }

    // Insert element
    void insert(int x) {
        pq[++n] = x;
        swim(n);
    }

    // Remove maximum element
    int delMax() {
        int maxP = pq[1];
        pq[1] = pq[n--];
        pq.pop_back();  // To avoid loitering
        sink(1);
        return maxP;
    }

    // Check if empty
    bool isEmpty() const {
        return n == 0;
    }

    // Get the size of the priority queue
    int size() const {
        return n;
    }
};

int main() {
    PriorityQueue pQueue(10);
    pQueue.insert(10);
    pQueue.insert(9);
    pQueue.insert(7);
    pQueue.insert(11);
    assert(pQueue.delMax() == 11);  // Test delMax function
    pQueue.insert(15);
    pQueue.insert(16);
    pQueue.insert(11);
    return 0;
}
