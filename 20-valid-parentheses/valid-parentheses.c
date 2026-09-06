bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 == 1) {
        return false;
    }
    
    char stack[10000];
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            if (top < 0) {
                return false;
            }
            
            char open = stack[top];
            bool matches = (open == '(' && c == ')') ||
                          (open == '{' && c == '}') ||
                          (open == '[' && c == ']');
            
            if (!matches) {
                return false;
            }
            top--;
        }
    }
    
    return top == -1;
}