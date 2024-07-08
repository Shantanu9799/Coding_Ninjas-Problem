string removeDuplicate(string &s)
{
    // Write your code here
    string str;
    str += s[0];
    int idx = 0;
    for(int i = 1; i < s.size(); ++i) {
        if(idx!=-1 && str[idx]!=s[i]) {
            str += s[i];
            idx++;
        }
    }
    return str;
}
