//q4.Remove common characters and concatenate two strings

#include<iostream>
  using namespace std;
  
  class Solution
  {
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
       string a="";
       for(int i=0;i<s1.size();i++)
       {
           if(s2.find(s1[i])==string::npos)
           {
               a+=s1[i];
           }
       }
       for(int i=0;i<s2.size();i++)
       {
           if(s1.find(s2[i])==string::npos)
           {
               a+=s2[i];
           }
       }
       if(a.size()==0)
       {
           a+="-1";
       }
       return a;
    }
};

 int main() 
 { 
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	
