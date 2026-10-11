class MyCircularQueue {
    int front;
    int rear;
    int* arr;
    int size; 
    int cap;
public:
    MyCircularQueue(int k) {
    front=0;
    rear=-1;
    size=0;
    cap=k;
    arr=new int[cap];
    }
        bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==cap;
    }
    bool enQueue(int v) {
        if(isFull())
        return 0;
    rear=(rear+1)%cap;
    arr[rear]=v;
    size++; 
    return 1;
    }
    
    bool deQueue() {
        if(!isEmpty()){
        front=(front+1)%cap;
        size--;
        return 1;
        }
        return 0;
    }
    
    
    int Front() {
        if(!isEmpty())
        return arr[front];
    return -1;
    }
    
    int Rear() {
        if(!isEmpty())
        return arr[rear];
    return -1;
    }
    
    

};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */