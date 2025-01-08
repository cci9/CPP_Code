#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    string s1 = "adhdyqdacnjafujffffffffhucj";
    cout<<s1<<endl;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;
        } 
    }
    cout<<s1<<endl;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }   
    }
    cout<<s1<<endl;

    // find the most repeating char in string
    int char_count[26];
    for (int i = 0; i < 26; i++)
    {
        char_count[i]=0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        char_count[s1[i]-'a']++;
    }
    int maxchar =0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (char_count[i]>maxchar)
        {
            maxchar = char_count[i];
            ans = i +'a';
        }
    }
    cout<<"max occuring char is "<<ans<<" occured "<<maxchar<<" times";
    
    return 0;
}