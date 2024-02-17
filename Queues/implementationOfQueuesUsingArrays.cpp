#include<iostream>
#include<vector>
using namespace std;
class Queue{
    private:
        int front;
        int back;
        vector<int> v;
    public:
        Queue(){
            this->back = -1;
            this->front = -1;
        }
        void enqueue(int data){
            v.push_back(data);
            this->back++;
            if(this->back==0){
                this->front = 0;
            }
        }
        void dequeue(){
            if(this->front==this->back){
                this->front = -1;
                this->back = -1;
                this->v.clear();
            }
            else{
                this->front++;
            }
        }
        int getFront(){
            if(this->front==-1){
                return -1;
            }
            return this->v[this->front];
        }
        bool isEmpty(){
            return this->front==-1;
        }
};
int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.dequeue();
    q1.enqueue(40);
    while(!q1.isEmpty()){
        cout<<q1.getFront()<<" ";
        q1.dequeue();
    }
    return 0;
}