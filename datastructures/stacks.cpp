#include <bits/stdc++.h>

using namespace std;

template <typename T> class Node {
    public:
        Node() {
        }
        Node(T elem, Node<T> *next_ptr) {
            data = elem;
            next = next_ptr;
        }

        T data;
        Node<T> *next;

};

template <typename T> class SinglyLinkedList {

    public:
        SinglyLinkedList() {

        }
        ~SinglyLinkedList() {

        }

        void push(T elem) {
            if(isEmpty())
                head = new Node<T>(elem, nullptr);
            else {
                Node<T> *newNode = new Node<T>(elem, head);
                head = newNode;
            }
            size++;
        }

        T pop() {
            if(isEmpty())
                throw runtime_error("Empty list");
            else {
                T elem = head->data;
                Node<T> *topNode = head;
                head = head->next;
                free(topNode);
                topNode = nullptr;
                
                size--;
                return elem;
            }
        }

        bool isEmpty() {
            return size == 0;
        }

        int indexOf(T elem) {
        }

        void printList() {
            cout < " ------ " << endl;
            Node<T> *trav = head;
            while(trav != nullptr) {

        }

    private:
        int size = 0;
        Node<T> *head = nullptr;

};

template <typename T> class Stack {

    public:
        Stack() {
        }

        ~Stack() {
        }

        void push(T elem) {
        }

        T pop() {
        }

        bool isEmpty() {

        }

}


int main() {

    cout << "Stacks ... " << endl;
    return 0;
}
