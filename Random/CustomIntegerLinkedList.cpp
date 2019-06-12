#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Node{
    int data;
    Node *next;

    public :
    Node(int data){
        this -> data = data;
        next = NULL;
    }

    void updateNext(Node *newNode){
        this -> next = newNode;
    }

    int getNodeData(){
        return this -> data;
    }

    Node* getNextNode(){
        return this -> next;
    }
};

Node *head = NULL, *last = NULL;

class IntegerList{
    private:
    Node *head, *tail;

    public:
    IntegerList(){
        head = NULL;
        tail = NULL;
    }

    void insertDataEnd(int data){
        Node *newNode = new Node(data);
        if (head == NULL){
            head = newNode;
        }else{
            tail -> updateNext(newNode);
        }
        tail = newNode;
    }

    void showList(){
        Node *temp = head;
        while(temp != NULL){
            cout << "->" << temp -> getNodeData();
            temp = temp -> getNextNode();
        }
    }

};

int main(){

    int itemData;
    IntegerList* myList = new IntegerList();
    do{
        cout << "Insert a new element in LL, to halt, insert -1 \n";
        cout << "Data = ";
        cin >> itemData;
        if (itemData == -1){
            break;
        }else{
            myList -> insertDataEnd(itemData);
        }
    } while (1);

    myList -> showList();

    cout << "\n";
    return 0;
}

