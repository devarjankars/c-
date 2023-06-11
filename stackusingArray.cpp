#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int arr[10];
    int top;
    Stack(){
        this->top=-1;
    }
    void push(int x){
        if(top==10){
            cout<<"stack is overflow"<<endl;;
            return;
        }
        else{
            top++;
            arr[top]=x;
        }

    }
    void pop(){
        if(top<0){
            cout<<"Stack is underflow"<<endl;
        }
        else{
            top--;
        }
        
    }
  int size(){
    return top+1;
        
    }
   bool isempty(){
    if(top>=0) return true;
    return false;
   }
   void prt(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<endl;
    }
   }
};
int main(){
    Stack st;
    st.push(12);
    st.push(23);
    st.push(67);
     st.prt();
     st.pop();
      st.push(3);
       st.push(2);
       cout<<endl;
     st.prt();
     cout<<endl;
     cout<<st.size();
}