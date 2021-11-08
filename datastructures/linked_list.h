#ifndef "LINKEDLIST_H"
#define "LINKEDLIST_H"

#include <bits/stdc++.h>

using namespace std;

template <typename T> class Node {

    public:
        Node() {
            prev = nullptr;
            next = nullptr; }

        Node(T node_data, Node<T>* prev_node, Node<T>* next_node) {
            data = node_data;
            prev = prev_node;
            next = next_node;
        }

        T getData(){
            return data;
        }

        void setData(T node_data) {
            data = node_data;
        }

        T data;
        Node<T> *prev;
        Node<T> *next;
};


template <typename T> class LinkedList {

    public:
        LinkedList() {
        }

        ~LinkedList() {
            //start at head and move
            Node<T> *trav = head;
            while(trav != nullptr) {
              Node<T> *next = trav->next;
              //cout << "Freeing " << trav->data << endl;
              free(trav);
              trav = next;
            }

            head = tail = trav = nullptr;
            size = 0;
        }

        // size of the list
        int listSize() {
            return size;
        }

        // check if empty?
        bool isEmpty() {
            return listSize() == 0;
        }

        // add an element to the tail of the linked list
        void addLast(T elem) {
            if(isEmpty()) {
                head = tail = new Node<T>(elem, nullptr, nullptr);
            } else {
                tail->next = new Node<T>(elem, tail, nullptr);
                tail = tail->next;
            }
            size++;

        }

        void addFirst(T elem) {
            if(isEmpty()) {
                head = tail = new Node<T>(elem, nullptr, nullptr);
            } else {
                head->prev = new Node<T>(elem, nullptr, head);
                head = head->prev;
            }
            size++;
        }

        void addAt(int index, T elem) {
            if (index < 0 || index > size) {
                throw runtime_error("Index is illegal");
            }

            if(index == 0) {
                addFirst(elem);
                return;
            }
            if (index == size) {
                addLast(elem);
                return;
            }

            // traverse to the index
            Node<T> *trav = head;
            for(int i = 0; i < index - 1; i++){
                trav = trav->next;
            }

            Node<T> *newNode = new Node<T>(elem, trav, trav->next);
            trav->next->prev = newNode;
            trav->next = newNode;
            size++;

        }

        T peekFirst() {
            if(isEmpty()) 
                throw runtime_error("Empty list");
            return head->data;

        }

        T peekLast() {
            if(isEmpty())
                throw runtime_error("Empty list");
            return tail->data;

        }

        T removeFirst() {

            if (isEmpty())
                throw runtime_error("Empty list");

            T elem = head->data;
            head = head->next;
            --size;

            if(isEmpty()) 
                tail = nullptr;
            else {
                free(head->prev);
                head->prev = nullptr;
            }

            return elem;
        }

        T removeLast() {
            if(isEmpty())
                throw runtime_error("Empty list");

            cout << "Current tail: " << tail->data << endl;
            T elem = tail->data;
            tail = tail->prev;
            --size;
            cout << "move tail to " << tail->data << endl;

            if(isEmpty())
                head = nullptr;
            else{
                free(tail->next);
                tail->next = nullptr;
            }
           

            return elem;
        }

        T removeAt(int index) {
            if(index < 0 || index >= size) {
                throw runtime_error("Index out of bounds");
            }
 
            if(index == 0) {
               T elem =  removeFirst();
                return elem;
            }
            if (index == size) {
                T elem = removeLast();
                return elem;
            }

            // traverse to the index pointing to the node to be
            // removed
            Node<T> *trav = head;
            for(int i = 0; i < index; i++){
                trav = trav->next;
            }

            trav->prev->next = trav->next;
            trav->next->prev = trav->prev;

            T elem = trav->data;

            free(trav);
            trav = nullptr;

            return elem;

        }

        // loop through and find the index of element
        int indexOf(T elem) {
            Node<T>* trav = head;
            int index = 0;
            while(trav != nullptr) {
                if(trav->data == elem) {
                    trav = nullptr;
                    return index;
                } else{
                    index = index + 1;
                    trav = trav->next;
                }
            }

            return -1;

        }

        bool contains(T elem) {
            return indexOf(elem) != -1;
        }

        // print list
        void printList() {

            cout << "Full array: ";

            Node<T> *trav = head;
            while(trav != nullptr) {
                cout << trav->data << " , " ;
                trav = trav->next;
            }
            trav = nullptr;
            cout << endl;
            cout << " ------- " << endl;
        };
                

    private:
        int size = 0;
        Node<T> *head = nullptr;
        Node<T> *tail = nullptr;

};


/*
int main() {

    cout << "Linked list ... " << endl;

    LinkedList<int> l;
    cout << "Empty? : " << l.isEmpty() << endl;

    cout << "Adding 10 .. " << endl;
    l.addFirst(10);
    l.printList();

    cout << "Addding 20 .. " << endl;
    l.addFirst(20);
    l.printList();

    cout << "Adding 30 .. " << endl;
    l.addFirst(30);
    l.printList();

    cout << "Peek first: " << l.peekFirst() << endl;
    cout << "Peek last: " << l.peekLast() << endl;

    l.printList();

    l.addAt(1, 100);
    l.printList();

    cout << l.removeFirst() << endl;
    l.printList();

    l.addLast(1000);
    l.printList();
    l.addLast(1001);
    l.printList();

    cout << l.removeLast() << endl;
    l.printList();

    cout << l.removeAt(2) << endl;
    l.printList();

    cout << "Index of 1000 : " << l.indexOf(1000) << endl;

    cout << "List contains 1000? " << l.contains(1000) << endl;
    cout << "List contains 20? " << l.contains(1000) << " at index: " << l.indexOf(20)  << endl;


    return 0;

}
*/

#endif 
