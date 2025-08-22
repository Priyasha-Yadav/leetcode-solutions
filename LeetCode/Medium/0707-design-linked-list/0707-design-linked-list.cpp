class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* cur = head;
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* cur = head;
            while (cur->next) {
                cur = cur->next;
            }
            cur->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* cur = head;
        for (int i = 0; i < index - 1; i++) {
            cur = cur->next;
        }
        Node* newNode = new Node(val);
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* toDelete;
        if (index == 0) {
            toDelete = head;
            head = head->next;
        } else {
            Node* cur = head;
            for (int i = 0; i < index - 1; i++) {
                cur = cur->next;
            }
            toDelete = cur->next;
            cur->next = cur->next->next;
        }
        delete toDelete;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */