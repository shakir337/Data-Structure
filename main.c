#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    printf("\t Please Enter The Capacity Of Stack:\n \t ");
    int CAPACITY,top=-1;
    scanf("%d",&CAPACITY);
    int stack[CAPACITY];


    bool isEmpty(){
        if(top==-1){
            printf("\t \t Stack is Empty !\n");
            return true;
        }else{
        return false;
        }
    }
    bool isFull(){

        bool temp;
        if(top==CAPACITY-1){
            printf("\t \t Stack is Full !\n");
            temp=true;
        }else{
         temp=false;
        }
        return temp;
    }
    void push(){

        bool temp=isFull();
        if(temp){

        }else{
        printf("\t \t Please Enter Element to be want to insert in stack:\n\t \t ");
        int ele;
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
        printf("\t \t Element inserted Successfully!\n");

        }


    }
     void display(){
        bool temp=isEmpty();

    if(temp){

    }else{
    int i;
     printf("\t Stack: \n\n");

    for(i=top;i>=0;i--){
        printf("\t \t |%d| \n",stack[i]);
    }
    printf("\t \t  -- \n");


    }


    }
    void pop(){
        display();
        int ele;
        bool temp=isEmpty();
        if(temp){
        }else{
        ele=stack[top];
        top--;
        printf("\n \t \t %d is removed from stack !\n\n",ele);
        }
        display();
    }

    void peek(){
    int ele;
    bool temp=isEmpty();
        if(temp){
        }else{
        ele=stack[top];
        printf("\t \t %d is on top in stack !\n",ele);
        }
    }

    while(1){
        printf("\t \n\n\n");
        printf("\t --------------------------------------------------------\n");
        printf("\t Stack Operation:\n");
        printf("\t 1:Push(Insert element into stack)\n");
        printf("\t 2:Pop(Delete Element from stack):\n");
        printf("\t 3:Peek element:\n");
        printf("\t 4:Display stack element:\n");
        printf("\t --------------------------------------------------------\n");



        printf("\t Enter choice:\n \t ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("\t Please enter correct choice:\n");



        }


    }



    return 0;




}
