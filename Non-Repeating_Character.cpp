// https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1?page=1&company=D-E-Shaw,Uber&difficulty=Easy&sortBy=submissions
char nonrepeatingCharacter(string s)
    {
       //Your code here
       vector<int>v(26,0);
       
       for(int i=0;s[i]!='\0';i++)
       {
           v[(s[i]-97)]++;
       }
       
       for(int i=0;s[i]!='\0';i++)
       {
           if(v[s[i]-97]==1)
            return s[i];
       }
       return '$';
       
    }
