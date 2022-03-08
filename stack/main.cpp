#include <iostream>

using namespace std;


class Stack{

int* a;
int max_size;
int current_size;
public:
    Stack(int val){
     this->a=new int[val];
     this->max_size=val;
     this->current_size=0;
    }

   void push(int x){

      if(isFull()){
        return;
      }
      a[current_size++]=x;
      return;

   }

    void pop(){
      if(isEmpty()){
        return ;
      }
      a[current_size--];
    }

    bool isEmpty(){
    if(current_size==0){
     return true;
    }

    return false;
    }

    bool isFull(){
    if(current_size==max_size&&current_size!=0){
        return true;
      }
      return false;
    }
    int top(){
     return a[current_size];
    }

    void display(){
    for(int i=0;i<current_size;i++){
        cout<<a[i]<<" ";
    }



   }
};



int main()
{

   Stack s(5);
   cout<<s.isEmpty()<<endl;
   cout<<s.isFull()<<endl;
   s.push(10);
   s.push(10);
   s.push(10);
   s.push(10);
   s.push(10);
   s.pop();
   s.pop();
   cout<<s.top();
   s.display();
   cout<<s.isFull()<<endl;
    return 0;
}
