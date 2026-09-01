class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.empty() || left.top() > num) left.push(num);
        else right.push(num);

       if (left.size() > right.size() + 1){
            //left mei 1 gap se jyada element hai
            right.push(left.top());
            left.pop();
        }
        else if (left.size()<right.size()){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
       if(left.size()==right.size()) {
        int x=left.top();
        int y=right.top();
        return (x+y)/2.0;
       }

       return left.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */