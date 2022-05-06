//---------- Infix expression to Prefix ------------//

//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// to comparare the precedence of operaters
int precedence_comparision(char symbol){

    switch(symbol)
    {
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

string InfixToPrefix(string s){
	stack<char> st;
	string result="";
	
	//we reverse the string 
	reverse(s.begin(),s.end());
	
	for(int i=0; i<s.length(); i++){
		//reads a character
		char symbol = s[i]; 
		
		//if it is an operand , add to resultant string
		if((symbol >='a' && symbol <='z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9')){
			result += symbol;
		}
		
		// treated as an opening bracket and pushed in the stack
		else if(symbol == ')'){
			st.push(symbol);		
		}
		
		//treated as a closing bracket and elements are added to the resultant string and popped from the stack until ')' is encountered 
		else if(symbol == '('){
			while(!st.empty() && st.top() != ')'){
				result += st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}			
		}
		
		//if an operator is encountered, check precedence and push or pop accordingly
		else{
			while(!st.empty() && (precedence_comparision(st.top()) > precedence_comparision(symbol)) ){
				result += st.top();
				st.pop();
			}
			st.push(symbol);			
		}	
	}
	//pop the rest of the expression from the stack
	while(!st.empty()){
		result += st.top();
		st.pop();
	}
		
	reverse(result.begin(), result.end());
	return result;	
}

// driver program to test InfixtoPrefix function
/*
expression: a^(b*c-d/(e+f))
            ))f+e(/d-c*b(^a
            ((f+e)/d-c*b)^a
            (fe+/d-c*b)^a
            (fe+d/-c*b)^a
            (fe+d/-cb*)^a
            (fe+d/cb*-)^a
            fe+d/cb*-a^
            ^a-*bc/d+ef
*/
// Main Function
int main(){
    string expression;
    cout<<"Enter expression : ";
    getline (cin, expression);
    //string expression ="a^(b*c-d/(e+f))";
    cout << InfixToPrefix(expression);
    return 0;
}
