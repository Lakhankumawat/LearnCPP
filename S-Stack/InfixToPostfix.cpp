//---------- Infix expression to Postfix ------------//

//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// to comparare the precedence of operaters
int precedence_comparision(char symbol){

    switch(symbol)
    {
        case '(':
        return 0;

        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '^':
        return 3;

        default:
        return -1;
    }
}

// converts infix to postfix expression
void InfixtoPostfix(string infix){

    // Using cpp built stack , For stack operation
    stack<char>  expression_stack;
    string result;

    for(int i=0;i< infix.length();i++){

        char symbol=infix[i];
        // check the character

        //if it is a operand , add to output
        if((symbol>='a' && symbol<='z')||(symbol>='0' && symbol<='9')||(symbol>='A' && symbol<='Z')){

            result +=symbol;
        }

        //if it is " ( ", push in stack
        else if(symbol == '('){

            expression_stack.push('(');
        }

        //if it is " ) ", pop and output the string upto symbol '(' .
        else if(symbol == ')'){

            while(expression_stack.top()!='('){

                 result += expression_stack.top();
                 expression_stack.pop();
            }
        expression_stack.pop();
        }

        //if it is a operator , check precedence and push or pop accordingly
        else{

            while(!expression_stack.empty() && precedence_comparision(infix[i])<=precedence_comparision(expression_stack.top())){
                result+=expression_stack.top();
                expression_stack.pop();
            }
            expression_stack.push(symbol);
        }
        
    }

    // pop the remaining expression from the stack
    while(!expression_stack.empty()){
                result+=expression_stack.top();
                expression_stack.pop();
    }
    cout<<result<<endl;
}

// driver program to test InfixtoPostfix function
/*
expression: a^(b*c-d/(e+f))
            a^[b*c-d/(e+f)]
            a^[b*c-d/[e+f]]
            a^[b*c-d/ef+]
            a^[bc*-d/ef+]
            a^[bc*-def+/]
            a^[bc*def+/-]
            abc*def+/-^
*/
// Main Function
int main(){
    string expression;
    cout<<"Enter expression : ";
    getline (cin, expression);
    //string expression ="a^(b*c-d/(e+f))";
    InfixtoPostfix(expression);
    return 0;
}