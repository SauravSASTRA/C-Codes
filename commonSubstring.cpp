#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    // Remove spaces from String S1 and S2.
       /*Test case say that S1 and S2 consist of characters in the range ascii[a-z].
         so this step is not required. */
    // Fill first string in unordered_map
    unordered_map<char, int> mWord;
    for(int i=0 ; i < s1.length(); i++)
    {
        mWord[s1[i]]++;
    }
    
    // Search 2nd string in has table. If found any character, return "YES".
    for(int i=0 ; i < s2.length(); i++)
    {
        if ( mWord[s2[i]] > 0 )
            return "YES";
    }
    
    // character not found so return "NO".
   return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
