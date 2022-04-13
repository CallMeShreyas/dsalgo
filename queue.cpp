#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue(){
            front=-1;
            rear=-1;
            for(int i=0;i<5;++i){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(front==-1 && rear==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(rear==4){
                return true;
            }
            else{
                return false;
            }
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"Queue is Full";
            }
            else if(isEmpty()){
                rear=0;
                front=0;
                arr[rear]=val;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }
        int dequeue(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
            else if(front == rear){
                int x=arr[front];
                arr[front]=0;
                front=-1;
                rear=-1;
                return x;
            }
            else{
                int x=arr[front];
                arr[front]=0;
                front++;
                return x;
            }
        }
        int count(){
            if(isFull()){
                return 5;
            }
            else if(isEmpty()){
                return 0;
            }
            else{
                return rear-front+1;
            }
        }
};

int main(){
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    // cout<<q1.isEmpty();
    cout<<q1.count();
}