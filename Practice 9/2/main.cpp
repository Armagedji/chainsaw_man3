#include <iostream>

using namespace std;

template <class T> void array_sort(T array[], int size) {
    if (size >= 2) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i+1; j < size; j++) {
                if (array[i] > array[j]) {
                    T temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}

int main()
{
    double* x = new double[5];
    double x1;
    int* y = new int[5];
    int y1;
    string* z = new string[5];
    string z1;
    for (int i = 0; i < 5; i++) {
        cin >> x1;
        x[i] = x1;
    }

    for (int i = 0; i < 5; i++) {
        cin >> y1;
        y[i] = y1;
    }

    for (int i = 0; i < 5; i++) {
        cin >> z1;
        z[i] = z1;
    }
    array_sort(x, 5);
    array_sort(y, 5);
    array_sort(z, 5);
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << y[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << z[i] << " ";
    }
    cout << endl;
}

