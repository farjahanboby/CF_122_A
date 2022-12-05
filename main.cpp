#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count1=0,i,n;
    cin>>n;
    /*string s;
    cin>>n;
    for(i=0;i<n;i++){
            cin>>s;
    for( i=0;i<s.length();i++){
        if(s[i]!='4' && s[i]!='7'){
            count1++;
            cout<<s[i]<<endl;
        }
    }
    cout<<count1;
    int n=stoi(s);*/

    if(n%4==0 || n%7==0 || n%47==0 || n%477==0 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
//}
