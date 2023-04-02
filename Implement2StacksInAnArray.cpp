#include<iostream>
using namespace std;

class Stacks{
    public:
    int top1 = -1;
    int size1;
    int top2;
    int size2;
    int *stack = new int[size2];
    
    void values(){
        cout<<"Top1 "<<top1<<endl;
        cout<<"Top2 "<<top2<<endl;
        cout<<"Size1 "<<size1<<endl;
        cout<<"Size2 "<<size2<<endl;
    }

    Stacks(int size1, int size2){
        this->size1 = size1;
        this->size2 = size1+size2;
        this->top2 = size1;
    }

    void push1(int data){
        cout<<(size1-1)-top1<<endl;
        if((size1-1)-top1 < 1){
            cout << "Stack 1 Overflow" << endl;
        }
        else{
            top1 += 1;
            stack[top1] = data;
        }
    }

    void push2(int data){
        if(top2 > size2){
            cout << "Stack 2 Overflow" << endl;
        }
        else{
            top2 += 1;
            stack[top2] = data;
        }
    }
    
    void pop1(){
        if(top1 < 1){
            cout << "Stack 1 Underflow" << endl;
        }
        else{
            top1 -= 1;
        }
    }

    void pop2(){
        if(top2 < size1){
            cout << "Stack 2 Underflow" << endl;
        }
        else{
            top2 -= 1;
        }
    }

    void peek1(){
        if(top1 < -1){
            cout<<"Stack 1 Underflow"<<endl;
        }
        else{
            cout<<stack[top1]<<endl;
        }
    }

    void peek2(){
        if(top2 < size1){
            cout<<"Stack 2 Underflow"<<endl;
        }
        else{
            cout<<stack[top2]<<endl;
        }
    }

    void isStack1Empty(){
        if(top1 > -1){
            cout<<"Stack 1 is not empty"<<endl;
        }
        else{
            cout<<"Stack 1 is empty"<<endl;
        }
    }

    void isStack2Empty(){
        if(top2 > size1){
            cout<<"Stack 2 is not empty"<<endl;
        }
        else{
            cout<<"Stack 2 is empty"<<endl;
        }
    }

    void display(){
        if(top1 > -1){
            cout<<"Stack 1: ";
            for(int i = 0; i <= top1; i++){
                cout<<stack[i]<<" ";
            }
        }
        else{
            cout<<"Stack 1 underflow";
        }
        cout<<endl;
        if(top2 > size1){
            cout<<"Stack 2: ";
            for(int i = size1+1; i <= top2; i++){
                cout<<stack[i]<<" ";
            }
        }
        else{
            cout<<"Stack 2 underflow";
        }
        cout<<endl;
    }
};
//1 2 3 4 
//64 43 456 42
int main(){
    Stacks stk(5, 5);
    stk.push1(1); 
    stk.push1(1);  
    stk.push1(1);  
    stk.push1(1);
    stk.push1(1);
    stk.display();
    stk.values();

    return 0;
}