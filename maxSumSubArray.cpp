#include<bits/stdc++.h>
using namespace std;
main(){
    int arr[10]={6, -10, -3, 0, 5};
    int res, mul;
    res=arr[0];
    for (int i = 0; i < 5; i++)
    {
        mul=arr[i];
        for(int j=i+1; j<5;j++)
        {
            res=max(res, mul);
            mul= mul*arr[j];

        }
        res= max(res, mul);
        
    }
    cout<<endl<<res;
}
