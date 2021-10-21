// C++ program to count the no. of same words occuring in string
#include<bits/stdc++.h>
using namespace std;
main(){
    // char str[]="hello world hello india";
    char str[100];
    string word;
    cout<<"Enter string\n";
    gets(str);
    cout<<"Enter Word\n";
    getline(cin, word);
    vector<string> a;
    char *p;
    p= strtok(str, " ");
    while(p!= NULL)
    {
        a.push_back(p);
        p= strtok(NULL, " ");
    

    }
        int count=0;
        for(int i=0;i<a.size();i++){
        if(word==a[i])
        count++;
        }
        cout<<count;
}