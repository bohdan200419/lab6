#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// task 1
template<typename T>
T findMax(vector<T> arr) {
    T currentMax = arr[0];
    for (T number : arr) {
        if (currentMax < number) {
            currentMax = number;
        }
    }
    return currentMax;
}

// task 2
template<typename T>
void sortVector(vector<T>& toBeSorted) {
    sort(toBeSorted.begin(), toBeSorted.end(), [](T first, T second) {return first > second; });
}


int main() {
    vector<int> intNumbers = { 1, 10,  2, 6, 8 };
    vector<double> doubleNumbers = { 1.5, 2.2, 6.7, 8.5, 8.2 };

    // task 1
    cout << findMax(intNumbers) << endl;
    cout << findMax(doubleNumbers) << endl;

    // task 2
    sortVector(intNumbers);
    sortVector(doubleNumbers);

    for (auto number : intNumbers) {
        cout << number << " ";
    }
    cout << endl;

    for (auto number : doubleNumbers) {
        cout << number << " ";
    }
    cout << endl;
}