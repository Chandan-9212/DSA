#include<iostream>
using namespace std;

class Stacks{
    public:
    int top = -1;
    int size;
    string *stack = new string[size];

    Stacks(int size){
        this->size = size;
    }

    void push(string data){
        if(top < size-1){
            top += 1;
            stack[top] = data;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }
    
    string pop(){
        if(top < 0){
            cout << "Stack Underflow" << endl;
        }
        else{
            top -= 1;
            return stack[top+1];
        }
    }

    void peek(){
        if(top < -1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            cout<<stack[top]<<endl;
        }
    }

    void isStackEmpty(){
        if(top > -1){
            cout<<"Stack is not empty"<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    void display(){
        if(top > -1){
            for(int i = 0; i <= top; i++){
                cout<<stack[i]<<" ";
            }
        }
        else{
            cout<<"Stack Underflow";
        }
        cout<<endl;
    }
};

void reverse(Stacks &stk){

    for(int i = 0; i <= stk.top/2; i++){
        string temp = stk.stack[i];
        stk.stack[i] = stk.stack[stk.top-i];
        stk.stack[stk.top-i] = temp;
    }
}

int main(){
    Stacks stk(5);
    stk.push("a"); 
    stk.push("b"); 
    stk.push("c"); 
    stk.push("d"); 
    stk.push("e");
    stk.display();
    reverse(stk);
    stk.display();
    return 0;
}