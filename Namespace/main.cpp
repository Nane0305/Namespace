
#include <iostream>

using namespace std;

namespace STL
{
    template <typename T>
    class Node
    {
    public:
        T value;
        Node* next;
        Node* prev;

        Node()
        {
            this->next = nullptr;
            this->prev = nullptr;
        }

        Node(T value) :Node()
        {
            this->value = value;
        }

        T GetValue()
        {
            return this->value;
        }
    };

    template <typename T>
    class Queue
    {
    private:
        Node<T>* head;
        Node<T>* tail;
        uint32_t length;

    public:
        Queue()
        {
            this->head = nullptr;
            this->tail = nullptr;
            this->length = 0;
        }
    };

    template <typename T>
    class Stack
    {
    private:
        Node<T>* head;
        Node<T>* tail;
        uint32_t length;

    public:
        Stack()
        {
            this->head = nullptr;
            this->tail = nullptr;
            this->length = 0;
        }
    };
}

namespace Drob
{
    template <typename T>
    class drob
    {
    private:
        int a;
        int b;
        double Fdrob = a / b;

    public:
        drob(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void GetDrob()
        {
            cout << this->a << "/" << this->b << endl;
        }
    };
}

using STL::Stack;
using Drob::drob;

int main()
{
    STL::Queue<int>* q = new STL::Queue<int>();
    Stack<int>* s = new Stack<int>();

    drob<double>* d = new drob<double>(3, 5);
    d->GetDrob();

    return 0;
}