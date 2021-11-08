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
            Node<T>* trav = head;
            while(trav != nullptr) {
                Node<T>  *nextNode = trav->next;
                cout << "Removing " << trav->data << endl;
                //free(trav);
                trav = nullptr;
                trav = nextNode;
            }
            size = 0;

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
                //free(topNode);
                topNode = nullptr;
                
                size--;
                return elem;
            }
        }

        T peek() {
            if(isEmpty())
                throw runtime_error("Empty list");
            else {
                T elem = head->data;
                return elem;
            }
        }

        int getSize() {
            return size;
        }

        bool isEmpty() {
            return size == 0;
        }

        int indexOf(T elem) {
            Node<T> *trav = head;
            int index = 0;
            while(trav != nullptr) {
                if(trav->data == elem) {
                    return index;
                }
                else {
                    trav = trav->next;
                }
                index += 1;
            } 
            return -1;
        }

        void printList() {
            cout << " ------ " << endl;
            Node<T> *trav = head;
            while(trav != nullptr) {
                cout << trav->data << " , " ;
                trav = trav->next;
            }
            cout << endl;
            cout << " ------ " << endl;
        }

    private:
        int size = 0;
        Node<T> *head = nullptr;

};

template <typename T> class Stack {

    public:
        Stack() {
        }

        Stack(T elem) {
            push(elem);
        }

        ~Stack() {
            
        }

        // push the element onto stack
        void push(T elem) {
            l.push(elem);
        }

        // pop the element at the top
        T pop() {
            if (isEmpty()) {
                throw runtime_error("Stack Empty");
            }
            return l.pop();

        }

        // return the index of the element with 0 being top element
        int search(T elem) {
            return l.indexOf(elem);
        }
        
        // peek the top element
        T peek() {
            return l.peek();
        }

        bool isEmpty() {
            return size() == 0;
        }

        int size() {
            return l.getSize();
        }

        void printStack() {
            l.printList();
        }

    private:
        SinglyLinkedList<T> l;

};


int main() {

    cout << "Stacks ... " << endl;
    Stack<int> l;
    l.push(10);
    l.printStack();
    l.push(20);
    l.printStack();

    int topElement = l.pop();
    cout << "Element popped: " << topElement << endl;

    l.printStack();

    cout << "Index of 10: " << l.search(10) << endl;
    cout << "Index of 20: " << l.search(20) << endl;
    return 0;
}
