bool isValid(string s) {
    stack<char> open_paren;
    int size = s.size();
    for(int i = 0; i < size; i++) {
        switch(s[i]) {
            case '(':
                open_paren.push('(');
                break;
            case '{':
                open_paren.push('{');
                break;
            case '[':
                open_paren.push('[');
                break;
            case ')':
                if (open_paren.empty() || '(' != open_paren.top()) return false;
                else open_paren.pop();
                break;
            case '}':
                if (open_paren.empty() || '{' != open_paren.top()) return false;
                else open_paren.pop();
                break;
            case ']':
                if (open_paren.empty() || '[' != open_paren.top()) return false;
                else open_paren.pop();
        }
    }
    if (open_paren.empty()) return true;
    return false;
}
