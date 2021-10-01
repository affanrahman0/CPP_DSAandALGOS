#include<iostream>
using namespace std;
#define item int
class queue
{
    item *arr;
    int front,rear,size;

    public:
    // void init(int size)
    // {
    //     this->size=size;
    //     arr=(item *)malloc(this->size*sizeof(item));
    //     rear=front=-1;
    // }
    queue(int size)
    {
        this->size=size;
        arr=(item *)malloc(this->size*sizeof(item));
        rear=front=-1;
    }
    bool isempty()
    {
        return rear==-1;
    }
    bool isfull()
    {
        return (((rear==size-1) && front==0)||front==rear+1);
    }
    void enqueue(item value)
    {
        if(isfull()) return;
        else
        {
            if(front==-1) front=0;
            if(rear!=size-1) rear++;
            else rear=0;
            arr[rear]=value;
        }
    }
    item dequeue()
    {
        if(isempty()) return -9999;
        else
        {
            item temp=arr[front];
            if(front==rear) front=rear=-1;
            else if(front!=size-1) front++;
            else front=0;
            return temp;
        }
    }
};

int main()
{
    //queue que;
    //que.init(5);
    queue que(5);
    
    que.enqueue(7);
    que.enqueue(8);
    que.enqueue(3);
    que.enqueue(9);
    cout<<"The deleted element is: "<<que.dequeue()<<endl;
   return 0; 
}
