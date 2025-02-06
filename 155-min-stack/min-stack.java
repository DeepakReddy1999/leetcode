class MinStack {
    private Stack<int[]> st;
   
    public MinStack() {
        st=new Stack<>();
    }
    
    public void push(int val) {
        if(st.isEmpty()){
            st.push(new int[]{val, val});
            return;
        }
        st.push(new int[]{val, Math.min(val, st.peek()[1])});

    }
    
    public void pop() {
       if(!st.isEmpty()){
           st.pop();
       } 
       return ;
    }
    
    public int top() {
        if(!st.isEmpty()){
           return st.peek()[0];
        }
        return -1;

    }
    
    public int getMin() {
        if(!st.isEmpty()){
            return st.peek()[1];
        }
        return -1;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */