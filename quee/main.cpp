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

   void dequeue(){
   if(isEmpty()){
    return;
   }
   if(Front==Rear){
    Front=-1;
    Rear=-1;
    return;
   }
    Front++;
   }

   int peek(){
   return a[Front];
   }

   bool isEmpty(){
   if(Front==-1&&Rear==-1||Front>Rear){
    return true;
   }
   return false;
   }
   bool isFull(){
    if(Rear==max_size-1){
        return true;
    }
    return false;
   }
};




int main()
{
    Queue q(10);

    for(int i=0;i<100;i++){
        q.enqueue(i);
    }
    cout<<q.peek();
    //q.dequeue();
    q.display();

    return 0;
}
