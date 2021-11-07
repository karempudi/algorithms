#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <typename T> class DynamicArray {

    public:
        // default empty constructor with on element;
        DynamicArray() {
            capacity = 0;
            arr = new T[capacity];
        }

        // initialize an array with capcity c;
        DynamicArray(int c) {
            if(c < 0) {
                throw runtime_error("Capcity is negative");
            }
            capacity = c;

            arr = new T[capacity];
        } 

        // destructor 
        ~DynamicArray() {
            len = 0;
            capacity = 0;
            delete[] arr;
        }

        // length of the array
        int size() {
            return len;
        }

        // is empty
        bool isEmpty() {
            return size() == 0;
        }

        // get an element at index;
        T get(int index) {
            return arr[index];
        }
        
        // set an element at the index
        void set(int index, T elem) {
            arr[index] = elem;
        }
    
        // print the array
        void printArray() {
            cout << " ------ " << endl;
            if (capacity == 0) {
                cout << "Empty array " << endl;
            }
            else {
                cout << "Capacity: " << capacity << " Length: " << len << endl;
                for(int i = 0; i < capacity; i++) {
                    cout << arr[i] << " " ;
                }
                cout << endl;
            }
        }

        // add an element to the array;
        void add(T elem) {
            
            if (len + 1 >= capacity) {
                if (capacity == 0) 
                    capacity = 1;
                else
                    capacity *= 2; T* new_array = new T[capacity];
                for(int i = 0; i < len; i++)
                    new_array[i] = arr[i];

                arr = new_array;
            }

            arr[len++] = elem;
        }

        // remove an element 
        T removeAt(int index) {
            if (index >= len || index < 0) 
                throw runtime_error("Index not valid");

            T data = arr[index];

            T* new_arr = new T[len - 1];
            for(int i = 0, j = 0; i < len; i++, j++) {
                if (i == index)
                    j--;
                else
                    new_arr[j] = arr[i];
            }

            arr = new_arr;
            capacity = --len;
            return data;
        }

        // get index of the element by comparing 
        int indexOf(T elem) {
            for(int i = 0; i < len; i++) {
                if(elem == arr[i]) 
                    return i;
            }
            return -1;
        }

        // removes an element
        bool remove(T elem) {
            int index = indexOf(elem);
            if (index == -1) 
                return false;
            
            removeAt(index);
            return true;
        }

        // contains?
        bool contains(T elem) {
            return indexOf(elem) != -1;
        }


    private:
        int len = 0;
        int capacity = 0;
        T* arr;

};

int main() {

    DynamicArray<int> i;
    i.printArray();
    i.add(10);
    i.printArray();
    i.add(20);
    i.printArray();
    i.add(30);
    i.printArray();
    i.add(40);
    i.printArray();
    i.add(50);
    i.printArray();

    int removedElement = i.removeAt(1);
    i.printArray();
    cout << "Index of 30: " << i.indexOf(30) << endl;

    cout << "Removing 40 " << endl;
    i.remove(40);
    i.printArray();


    return 0;
}

   
