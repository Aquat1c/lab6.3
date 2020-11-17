#include <iostream>
#include <iomanip>

#include <time.h>

using namespace std;

    int* input(int size)
    {
        int* arr = new int[size];
        for (int i = 0;i < size;i++)
        {
            cout << "Input number " << i + 1 << "-> ";
            cin >> arr[i];
        }
        return arr;
    }

    template <typename T> 
    T PrintTValue(T* a, const T size)
    {
        cout << "Print values in template function" << endl;
        for (int i = 0; i < size; i++)
            cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
        cout << endl;

        return 0;
    }



int Print(int* c, const int size) {
    cout << "Array=[" << size << "] = {";
    for (int i = 0; i < size; i++)
        cout << (i > 0 ? ", " : "") << c[i];
    cout << "}" << endl;
    cout << endl;
    return 0;

}

int main()
{

    cout << "Input size of array: " << endl;
    int n = 0;
    cin >> n; 
    int* mas = input(n); 
    Print(mas, n); 
    delete[] mas;

    system("pause");
    return 0;
}
