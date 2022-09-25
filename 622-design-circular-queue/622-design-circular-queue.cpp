/*class MyCircularQueue {
public:
    vector<int>arr;
    int size;
    int front;
    int rear;
    MyCircularQueue(int k) {
        arr.resize(k);
        size=k;
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(front==-1&&rear==-1)
            front=rear=0;
        else if((rear==size-1)&&(front!=0))
            rear=0;
        else
            rear++;
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        arr[front]=-1;
        if(front==rear)
            front=rear=-1;
        else if(front==size-1)
            front=0;
        else
            front++;
        return true;
    }
    
    int Front() {
        if(front==-1)
            return -1;
        else
        {
            int ans=arr[front];
            return ans;
        }
    }
    
    int Rear() {
        if(rear==-1)
            return -1;
        else
        {
            int ans= arr[rear];
            return ans;
        }
    }
    
    bool isEmpty() {
        if(front==-1)
           return true;
        else
           return false;
    } 
    
    bool isFull() {
        if(front==0 && rear==size-1)
            return true;
        else if(rear==(front-1)%(size-1))
            return true;
        else 
            return false;
    }
};*/


class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        data.resize(k);
        maxSize = k;
    }
    bool enQueue(int val) {
        if (isFull()) return false;
        tail = (tail + 1) % maxSize;
        data[tail] = val;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        if (head == tail) head = 0, tail = -1;
        else head = (head + 1) % maxSize;
        return true;
    }
    int Front() {
        return isEmpty() ? -1 : data[head];
    }
    int Rear() {
        return isEmpty() ? -1 : data[tail];
    }
    bool isEmpty() {
        return tail == -1;
    }
    bool isFull() {
        return !isEmpty() && (tail + 1) % maxSize == head;
    }
private:
    int maxSize, head = 0, tail = -1;
    vector<int> data;
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