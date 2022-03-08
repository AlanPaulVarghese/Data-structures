#include <iostream>

using namespace std;


class Stack{

int* a;
int max_size;
int current_size;
public:
    Stack(int val){
     this->a=new int[val];
     this->max_size=0;
     this->current_size=0;
    }

   void push(int x){

      if(current_size==max_size-1){
        return;
      }
      a[current_size++]=x;
      return;

   }

   void display(){
       cout<<current_size;
    for(int i=0;i<current_size;i++){
        cout<<a[i]<<" ";
    }
   }
};



int main()
{
    Stack s(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.display();
    return 0;
}
