class Solution {
public:
    string sortVowels(string s) {
        vector<char>a;
        
        int index=0;
        //select the vowel from the string
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                a.push_back(s[i]);
                s[i]='_';
                index++;
            }
        }
        //sort the vowel according to their ascii value
           sort(a.begin(),a.end());
        //insert the vowel at their correct position
         int first=0,second=0 ;
        while(second<a.size())
        {
            if(s[first]=='_')
             {
                s[first]=a[second];
                second++;
            }
            first++;
        }
        
       return s;
        
    }
};