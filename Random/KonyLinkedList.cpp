#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL, *tail = NULL;

void createList(){
    int data;
    cout << "List creation in process, input -1 to terminate...\n";
    do{
        cout << "Data = ";
        cin >> data;

        if (data == -1){
            break;
        }else{
            struct Node *newNode = new Node;
            newNode -> data = data;
            if (head == NULL){
                newNode -> next = NULL;
                head = newNode;
                tail = newNode; 
            }else{
                tail -> next = newNode;
                tail = newNode;
            }
        }
    }while(1);
}

void showList(){
    struct Node *temp = head;
    if(temp == NULL){
        cout << "Nothing to print\n";
    }else{
        cout << "List => ";
        while(temp != NULL){
            cout << " - " << temp -> data;
            temp = temp -> next;
        }
    }
}

void konyTraversalLogic(int groupSize, int delSize){
    if (delSize > groupSize && head != NULL){
        cout << "Invalid parameters OR No List exists";
    }else{

        int count = 0;
        bool isFirstGroup = true, isFirstGroupComplete = false;
        struct Node *temp = head, *actualFirst = head;
        struct Node *lastElementOfGroup;
        while (temp != NULL){

            count = count + 1;
            cout << count << endl;
            
            if(count == delSize && count == groupSize){
                head = temp -> next;
                isFirstGroup = false;
                isFirstGroupComplete = true;
                count = 0;
            }else if(count == delSize + 1 && isFirstGroup){
                head = temp;
                isFirstGroup = false;
                cout << "First group found";
            }else if(count == delSize + 1){
                lastElementOfGroup -> next = temp;
            }
            
            if(count == groupSize){
                isFirstGroupComplete = true;
                count = 0;
                lastElementOfGroup = temp;
            }

            temp = temp -> next;
        }

        if(!isFirstGroupComplete){
            head = actualFirst;
            cout << "No group completed";
        }

    }
}

int main(){

    createList();
    showList();
    cout << "\n";
    konyTraversalLogic(5,5);
    showList();

    cout << "\n";
    return 0;
}