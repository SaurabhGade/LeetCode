class Solution {
public:
    char eval(vector<bool> & expr, char op){
        if(op == '&'){  // operator is &
            for(int i = 0; i < expr.size(); i++)
                if(expr[i] == false) return 'f';
            return 't';
        }
        else if(op == '!'){
            if(expr[0] == true) return 'f';
            else return 't';
        }
        // operator is |
        for(int i = 0; i < expr.size(); i++)
            if(expr[i] == true) return 't';
        return 'f';
    }
    bool parseBoolExpr(string expression) {
        bool res;
        string &ex = expression;
        stack<char> st;
        for(char ch: ex){
            if(st.empty()){     // stack is empty blind push.
                if(ch != ')' && ch != ',') st.push(ch);
            }
            else{               // stack is not empty.
                vector<bool> intr;  // store intermidate expression result.
                if(ch == ')'){
                    while(!st.empty() && st.top() != '('){
                        char operand = st.top(); st.pop();
                        if(operand == 't') intr.push_back(true);
                        else intr.push_back(false);
                    }
                    st.pop();       // curr st.top() == '('
                    char res = eval(intr, st.top()); st.pop(); // pop the current operator.
                    st.push(res);       /// push the intermidate result.
                }else if(ch == ',') continue;
                else st.push(ch);
            }
        }
        res = (st.top() == 't')? true: false;
        return res;
    }
};