#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack(){
            top=-1;
            for(int i=0;i<5;++i){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(top==4){
                return true;
            }
            else{
                return false;
            }
        }
        void push(int val){
            if(isFull()){
                cout<<"Overflow"<<endl;
            }
            else{
                top=top+1;
                arr[top]=val;
            }
        }
        int pop(){
            if(isEmpty()){
                cout<<"UnderFlow"<<endl;
                return 0;
            }
            else{
                int popvalue=arr[top];
                arr[top]=0;
                top--;
                return popvalue;
            }
        }
        int count(){
            return top+1;
        }
        int peek(int pos){
            if(isEmpty()){
                cout<<"UnserFlow"<<endl;
                return 0;
            }
            else{
                return arr[pos];
            }
        }
        void change(int pos, int val){
            arr[pos]=val;
            cout<<"Value changed at location "<<pos<<endl;
        }
        void display(){
            cout<<"Values in the stack are : "<<endl;
            for(int i=4;i>=0;--i){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){
    Stack s1;
    // int option, position, value;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout<<s1.count();
    // s1.display();
    // cout<<s1.isEmpty();
    // cout<<s1.isFull();
}