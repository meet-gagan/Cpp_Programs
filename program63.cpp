#include <iostream>
using namespace std;

int main() {
    int size, k, toggle = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements for the array " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter the " << i+1 << "th element of the array: ";
        cin >> arr[i];
    }

    do
    {
        cout << "Enter the value of K(indexing starts from 1): ";
        cin >> k;
        if (k >= 1 && k <= size) {
            sort(arr, arr + size);
            int kthSmallest = arr[k - 1];
            cout << "The " << k << "th smallest element is: " << kthSmallest <<  endl;


        } else {
            cout << "Invalid value of K(K should be between 1 and " << size << ")" <<  endl;
            toggle = 1;
        }
    } while(toggle);

    return 0;
}
