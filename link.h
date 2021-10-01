#define item int
class Node {

    int data;
    Node* next;
public:
    Node(int data);
    friend class list;
};
class list {
    Node* head;
  
public:
    list();
    list(const list &a);
    void insert(int);
    void print();
    ~list();
};