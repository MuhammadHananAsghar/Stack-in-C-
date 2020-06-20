// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
// DATA SCIENTIST
#include <iostream>
using namespace std;
class Stack{
  int n = 10;
  int top;
  int arr[10];
  public:
    Stack(){
      top = -1;
  }
  void addIn(int data){
    if(top >=n-1){
      cout<<"Stack OVerflow";
    }
    else{
      top = top + 1;
      arr[top] = data;
    }   
  }
  void display(){
    for(int i=top;i>=0;i--){
      cout<<arr[i]<<endl;
    }
  }
  void popIn(){
    if(top<=-1){
      cout<<"Stack is Empty";
    }
    else{
      top = top - 1;
    }
  }

};

int main() {
  Stack s;
  s.addIn(2);
  s.addIn(3);
  s.addIn(10);
  s.display();
  s.popIn();
  s.display();

}
