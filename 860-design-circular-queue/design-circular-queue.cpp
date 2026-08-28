class MyCircularQueue {
public:
    int f,b,s,c;//front back size capacity
    vector<int>arr;
    MyCircularQueue(int k) {
        s=f=b=0;
        c=k;
        vector<int>v(k);
        arr=v;
    }
    
    bool enQueue(int val) {
        if(isFull()) return false;
        arr[b]=val;
        b = (b + 1) % c;
        s++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        f = (f + 1) % c;
        s--;
        return true;
    }
    
    int Front() {
        if(s==0) return -1;
        return arr[f];
        
    }
    
    int Rear() {
        if(s==0) return -1;
       return arr[(b - 1 + c) % c];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        return false;
    }
    
    bool isFull() {
        if(s==c) return true;
        return false;
        
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