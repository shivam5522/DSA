class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int t;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()!=1){
            int ele=q1.front();
            q1.pop();
            q2.push(ele);
        }
        int removed=q1.front();
        q1.pop();
        while(q2.size()!=0){
            int ele=q2.front();
            q2.pop();
            q1.push(ele);
        }
        return removed;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */