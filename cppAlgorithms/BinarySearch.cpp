#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; //element not found
}

// Dizi Yazdırma Fonksiyonu
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3932, 932474, 562, 5, 123456789};

    cout << "Siralanmis Dizi: ";
    printArray(arr); // Diziyi yazdır

    int target = 10;
    sort(arr.begin(), arr.end()); // Ensure the array is sorted
    int result = binarySearch(arr, target);

    if (result != -1)

        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" <<endl;

    return 0;
}
