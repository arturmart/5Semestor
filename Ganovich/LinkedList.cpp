#include <iostream>


class LinkedList {
private:

    class  Node {
    public:
        int value;
        Node* next;

        Node(int val) {
            value = val;
            next = nullptr;
        }
    };

    Node* getEnd() {
        return getById(getSize() - 1);
    }

    Node* getById(int id) const {
        Node* localNode = head;

        for (int i = 0; i < id; i++) {
            localNode = localNode->next;
            if (localNode == nullptr) return NULL;
        }
        return localNode;

    }


    Node* head;
    int size;

public:

    LinkedList() : head(nullptr), size(0) {}

    int getSize() const {
        
        return size;
    }
    LinkedList(const std::initializer_list<int>& arr){
        for(int val: arr){
            pushBack(val);

        }

    }

    void pushFront(int value) {

        Node* newNode = new Node(value);
        newNode->next = head;
        size++;
        head = newNode;
    }


    void pushBack(int value){
        
        if(head != nullptr )    getEnd()->next = new Node(value);
        else head = new Node(value);
        size++;
    }

    void popFront(){
        if(head){
            Node* tmp = head;
            
            head = head->next;
            delete(tmp);
            size--;
            }

    }

    void popBack(){
        if(!head) return;
        else if(!head->next){
            delete head;
            head = nullptr;

        }
        else{
            Node* tmp = getById(getSize()-2);
            delete(tmp->next);
            tmp->next = nullptr;
        }
        size--;
        

    }

    bool empty () const {
        if (!head)
            return true;
        return false;
    }

    int back() {
        Node* localNode = getEnd();
        if(localNode == nullptr) throw std::out_of_range("out_of_range");
    
        return localNode->value;
    }

    int front() {
        if (!head)
            throw std::out_of_range("out_of_range");
        return head->value;
    }

    int& operator[] (int id){
        Node* localNode = getById(id);
        if(localNode == nullptr) throw std::out_of_range("out_of_range");
    
        return localNode->value;
    }

    const int& operator[] (int id) const {
        Node* localNode = getById(id);
        if(localNode == nullptr) throw std::out_of_range("out_of_range");
    
        return localNode->value;
    }

    LinkedList sumLinkedList(const LinkedList& list ) const {
        LinkedList newList;


        int buf = 0;
        int i = 0;
        int sum;
        while (i < size || i < list.getSize()) {
            sum = 0;
            if (i < size)
                sum += (*this)[i];
            if (i < list.getSize())
                sum += list[i];
            sum+= buf;
            newList.pushBack(sum%10);
            buf = sum/10;
            i++;
        }
        if (buf)
            newList.pushBack(buf);



        

        
        
        return newList;

    }

    operator int () const {
        int sum = 0;
        for (int i = 0; i < getSize(); i++) {
            sum*=10;
            sum +=(*this)[i];
            
        }
        return sum;


    }
};

bool check_sum (const LinkedList& op1, const LinkedList& op2, const LinkedList& res_l) {
    int sum = op1 + op2;
    int res = 0;

    while (sum)
    {
        res *= 10;
        res += sum%10;
        sum /= 10;
    }

    return (res == res_l);
}

int main()
{
    LinkedList list1 = {9,9,9,9,9,9,9};
    LinkedList list2 = {9,9,9,9};

    LinkedList list3 = list1.sumLinkedList(list2);
    // list.pushFront(1);
    // list.pushFront(2);
    // list.pushFront(3);
    // list.pushBack(4);
    // list.pushBack(5);
    // list.pushBack(6);

    // list.popFront();
    // list.popBack();
   

    

    for (int i = 0; i < list3.getSize(); i++) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;

    if (check_sum(list1, list2, list3))
        std::cout << "the result is correct\n";
    else
        std::cout << "the result is incorrect\n";
    
}
