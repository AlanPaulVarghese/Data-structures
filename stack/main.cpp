#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{

T* a;
int max_size;
int current_size;
public:
    Stack(T val){
     this->a=new T[val];
     this->max_size=val;
     this->current_size=0;
    }

   void push(T x){

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
    T top(){
     return a[current_size-1];
    }

    void display(){
    for(int i=0;i<current_size;i++){
        cout<<a[i]<<" ";
    }

   }


   void addAtBottom(T e){

    if(isEmpty()){
        push(e);
        return;
    }

    T te=top();
    pop();
    addAtBottom(e);
    push(te);
    }

    void rev(){

     if(isEmpty()){
        return;
     }

     T e=top();
     pop();
     rev();
     addAtBottom(e);
    }

};



int main()
{

}
