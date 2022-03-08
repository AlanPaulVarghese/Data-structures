#include <iostream>

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
};



int main()
{
   string sen;
   getline(cin,sen);
   Stack<char>s(sen.size());
   for(int i=0;i<sen.size();i++){
    if(sen[i]==' '){
        s.push(' ');
        continue;
    }
    s.push(sen[i]);
   }
   sen="";
   int i=0;
   while(!s.isEmpty()){
    sen.push_back(s.top());
    s.pop();
   }

   cout<<sen;
     return 0;
}
