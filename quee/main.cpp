#include <iostream>

using namespace std;

class Queue{

int* a;
int max_size;
int Front;
int Rear;
public:
    Queue(int val){
     this->a=new int[val];
     this->max_size=val;
     this->Front=-1;
     this->Rear=-1;
    }

    void enqueue(int x){
    if(Rear==max_size-1){
        return;
    }
     if(Front==-1&&Rear==-1){
        Front=0;
        Rear=0;
        a[Rear]=x;
        return ;
    }
    Rear++;
    a[Rear]=x;

    }

    void display(){
    for(int i=Front;i<=Rear;i++){
        cout<<a[i]<<" ";
    }

    }

};




int main()
{
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    return 0;
}