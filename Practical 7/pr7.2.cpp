//Practical 7 - C++ course
//Maria Isabel Vera Cabrera

#include <iostream>
#include <array>
#include <math.h>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

//Exercise 2 : A generic finite-size stack

template <typename T> class StackI{
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
}
;

template <typename T> class Stack:StackI<T>{
protected:
    int capacity;
    int numberCurrentElements;
    int lastIndex;
    T s[];


public:
    Stack(){
        capacity=20;
        s[capacity];
        lastIndex=0;
        numberCurrentElements=0;
    }

    Stack(int n){
        capacity=n;
        s[capacity];
        lastIndex=0;
        numberCurrentElements=0;
    }

    void push(T t){
        try{
            if (numberCurrentElements>=0 && numberCurrentElements<capacity){
            s[lastIndex]=t;
            lastIndex+=1;
            numberCurrentElements+=1;
            }
            else if (numberCurrentElements==capacity){
                throw "FullStackException";
            }
        }
        catch(const char* msg){
            cout<<msg<<endl;
        }
    }

    void pop(){
        try{
            if (numberCurrentElements>0){
                lastIndex-=1;
                numberCurrentElements-=1;
            }
            else if (numberCurrentElements==0){
                throw "EmptyStackException";
            }
        }
        catch(const char* msg){
            cout<<msg<<endl;
        }
    }

    T top(){
        try{
            if (numberCurrentElements>0){
                return s[lastIndex];
            }
            else if (numberCurrentElements==0){
                throw "EmptyStackException";
            }
        }
        catch(const char* msg){
            cout<<msg<<endl;
        }

    }

    void print(){
        try{
            if (numberCurrentElements>0){
                for(int i=lastIndex;i>=0;i--){
                    if (i==lastIndex)
                        cout << "top: ";
                    else {
                        cout << "\t\t" ;
                        cout << s[i] << endl;
                    }
                }
            }
            else{
                throw "EmptyStackException";
            }
        }
        catch(const char* msg){
            cout<<msg<<endl;
        }

    }

    bool isEmpty(){
        if (numberCurrentElements==0){
            true;
        }
        else{
            false;
        }
    }
}
;


//Final Executable function
int main(){

    Stack<int> stack1(3);
    stack1.print();

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.print();

    //It cannot enter
    stack1.push(4);

    //Drop 1
    stack1.pop();
    stack1.print();

    //Drop another one
    stack1.pop();
    stack1.print();

    //Drop last one
    stack1.pop();
    stack1.print();

    return 0;
}

