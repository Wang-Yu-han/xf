#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
    string s;
    int a;
    getline(cin, s);
    char ch[s.length()+1];
    strcpy(ch, s.c_str());
    for (int i = 0; i < s.length(); i++) {
        if((ch[i]='.')||(ch[i]='%')||(ch[i]='/')||(ch[i]='\0')) {
            a=i;
            break;
        }
        else{
            a=s.length();
        }
    }

    if(a!=s.length()){
    for(int i=0;i<a/2;i++){
        char temp;
        temp=ch[i];
        ch[i]=ch[a-i-1];
        ch[a-i-1]=temp;
    }
    for(int i=0;i<s.length()-a-1;i++){
        char temp;
        temp=ch[i+a+1];
        ch[i+a+1]=ch[s.length()-i];
        ch[s.length()-i]=temp;
    }
    }
    else{
        for(int i=0;i<s.length()/2;i++){
        char temp;
        temp=ch[i];
        ch[i]=ch[s.length()-i-2];
        ch[s.length()-i-2]=temp;
        }
    }
    cout << ch << endl;
    return 0;
