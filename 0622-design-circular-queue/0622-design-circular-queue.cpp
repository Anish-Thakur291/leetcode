class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size=k;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
           
            return false;
        }
        else if(front==-1){
            front=rear=0;
           
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            
        }
        else{
            rear++;
            
        }
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front==rear){
            front=rear=-1;
        }  
        else {
            front=(front+1)%size;
            
        } 
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return false;
        }
       return arr[front];
    }
    
    int Rear() {
         if(isEmpty()){
            return false;
        }
       return arr[rear];
    }
    
    bool isEmpty() {
       return (front==-1);
        
    }
    
    bool isFull() {
      return ((rear + 1) % size == front);
        
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
