#include <iostream>
#include <iomanip>
using namespace std;
void create_array(int arr[], int size, int i)
{

    // base case
    if (i == size) {
        cout << endl;
        return;
    }

    // print the ith element
    cin >> arr[i];
    i++;

    // recursive call
    create_array(arr, size, i);
}
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    cout << endl;
    int* arr = new int[n];

    create_array(arr, n, 0);
    for (int i = 0; i < n; i++) {
        cout << setw(4) << arr[i];
    }

    cout << endl;
    return 0;
}
