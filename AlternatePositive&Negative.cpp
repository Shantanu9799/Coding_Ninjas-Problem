#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size(), i = 0, j = 0;
    vector<int> pos(n/2), neg(n/2);
    for(auto it : arr) {
        if(it >= 0) pos[i++] = it;
        else neg[j++] = it;
    }
    i = 0; j = 0;
    for(int idx = 0; idx < n; ++idx) {
        if((idx & 1) == 0) {
            arr[idx] = pos[i++];
        } else {
            arr[idx] = neg[j++];
        }
    }
}


**********************************************


#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
    vector<int> pos;
    vector<int> neg;
    for(int i : arr) {
        if(i < 0) {
            neg.push_back(i);
        } else {
            pos.push_back(i);
        }
    }
    int i = 0, j = 0;
    for(int idx = 0; idx < arr.size(); idx++) {
        if((idx & 1) == 0) {
            arr[idx] = pos[i++];
        } else {
            arr[idx] = neg[j++];
        }
    }
}
