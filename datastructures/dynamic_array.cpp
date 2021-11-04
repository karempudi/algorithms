#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <typename T> class DynamicArray {

    public:
        DynamicArray(int c) {
            if(c < 0) {
                throw runtime_error("Capcity is negative");
            }
            capacity = c;

            arr = new T[capacity];
        }

        ~DynamicArray() {
            delete[] arr;
        }

        int size() {
            return len;
        }

        bool isEmpty() {
            return size() == 0;
        }

        int get(int index) {
            return arr[index];
        }
        
        void set(int index, T elem) {
            arr[index] = elem;
        }

        void printArray() {
            for(int i = 0; i <= capacity; i++) {
                cout << arr[i] << " " ;
            }
            cout << endl;
        }
    private:
        int len = 0;
        int capacity = 0;
        T* arr;

};

int main() {

    DynamicArray<int> i(10);
    i.set(0, 1);
    i.set(1, 2);
    i.set(2, 3);
    i.printArray();


    DynamicArray<string> s(10);

    s.set(0, "Praneeth");
    s.set(1, "Karempudi");
    s.printArray();


    DynamicArray<double> d(10);
    d.set(0, 1.032123);
    d.set(1, 12312.1321);
    d.set(3, 122.123);
    d.printArray();

    return 0;
}

   
