#include <iostream>
using namespace std;
void pattern1(){
    for(int i = 3; i > 0; i--){
        for(int j = 0; j < 3; j++){
            cout<<3-j<<" ";
        }
        cout<<endl;
    }
}
void pattern2(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern3(){
    int i = 1;
    while(i <= 5)
    {
        for(int j = 0; j < i; j++){
            cout<<i<<" ";
        }
        i++;
        cout<<endl;
    }
}
void pattern4(){
    int a = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            cout<<(char)(65+a)<<" ";
            a++;
        }
        cout<<endl;
    }
}
void pattern5(){
    for(int i = 0; i < 3; i++){
        for(int j = i; j < 3+i; j++){
            cout<<(char)(65+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern5();
    return 0;
}
