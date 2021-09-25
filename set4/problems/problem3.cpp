#include <string>
#include <functional>
#include <iostream>

class LinkedList
{
private:
    struct Node
    {
        std::string value;
        Node* next = nullptr;
    };

    Node* head;
public:
    LinkedList();
    // LinkedList(const LinkedList& list);
    // LinkedList& operator=(const LinkedList& list);
    ~LinkedList();
    void addNode(const std::string& str);
    void transformEach(std::function<std::string(const std::string&)> func);
    void printOutAllNodes(){
        Node* current = head;
        while(current!=nullptr) 
        {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

LinkedList::LinkedList()
{
    head = new Node{"head"};
}

void LinkedList::addNode(const std::string& str)
{
    Node* current = head;
    while(current->next !=nullptr) 
    {
        current = current->next;
    }
    current->next = new Node{str};
}

LinkedList::~LinkedList()
{
    Node* current = head;
    while(current!=nullptr) 
    {
        delete current;
        current = current->next;
    }
}

void LinkedList::transformEach(std::function<std::string(const std::string&)> func){
    Node* current = head;
    while(current!=nullptr) 
    {
        current->value = func(current->value);
        current = current->next;
    }
}