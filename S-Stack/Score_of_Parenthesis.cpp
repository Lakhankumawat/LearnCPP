int scoreOfParentheses(string s) {
        stack<int>st;
        int score=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                //if we find open parenthesis, push the current score into the stack
                st.push(score);
                score=0;
                //reset the score to 0
            }
            else if(s[i]==')'){
                //if we find close parenthesis
                score=st.top()+ max(2* score , 1);
                st.pop();
            }
        }
        return score;
        //return score
    }

/*
Complexity Analysis
Time Complexity :- O(N)
Space Complexity :- O(N)
*/
