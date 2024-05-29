#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int top=-1; //stack empty initially so top=-1
int n; //size of stack

bool isempty(){                              //to check whether stack is empty
    if(top==-1){
        printf("Stack Empty!");
        return true;
    }
    return false;
}

bool isfull(){
    if(top==n-1){                             //to check whether stack is full
        printf("Stack Overflow!");
        return true;
    }
    return false;
}

void push(int stack[],int item){        //push function to add elements to a stack
    if(isfull()){
        return;
    }
    else{                                              
        top+=1;                              //increment top if stack is not full
        stack[top]=item;                  //add the element to the top of stack, new element always goes to the top of stack
        printf("Pushed %d\n",item);
    }
}

void pop(int stack[]){                    //pop function to remove elements from a stack
    if(isempty()){                    
        return;
    }
    else{
       int item=stack[top];                  //if stack full then pop element from top
        top--;                                  // decrement top since no element is present at previous top( that is, the position of the element which was popped is the previous top)
        printf("Popped %d\n",item);
    }
}
int main(){
    printf("Enter size of stack:");
    scanf("%d",&n);
    int value;
    int stc[n];
    while(true){
        scanf("%d",&value);
        push(stc,value);
        if(top==n-1){
            while(!isempty()){
                pop(stc);
            }
            
        }
    }
}
