//Implementing Queue using Stack
class QueueByStack{
    public:
    stack<int> s1, s2;
    
    void push(int x){
        while(s1.size()!=0){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()!=0){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop(){
        if(s1.empty()) throw std::runtime_error("Queue is empty");
        int val = s1.top();
        s1.pop();
        return val;
    }

    int front(){
        if(s1.empty()) throw std::runtime_error("Queue is empty");
        return s1.top();
    }

     bool isEmpty(){
        return s1.empty();
    }

    int size(){
        return s1.size();
    }
};
