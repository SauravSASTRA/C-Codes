// C++ program to remove spaces using stringstream
#include<bits/stdc++.h>
using namespace std;

/* Function to remove spaces */
vector<string> removeSpaces(string str)
{
	stringstream ss;
	string temp;
    vector<string> vTemp;
	/* Storing the whole string into string stream */
	ss << str;
	/* Running loop till end of stream */
	while (!ss.eof())
	{
		/* extracting word by word from stream */
		ss >> temp;
		vTemp.push_back(temp);
	}
	return vTemp;
}

unordered_map<string, int> findWordCount(vector<string> vStr)
{
    unordered_map<string, int> wordCountTemp;
    vector<string>::iterator vItr;
    for(vItr = vStr.begin(); vItr != vStr.end(); vItr++)
    {
        wordCountTemp[*vItr]++;
    }
    return wordCountTemp;
}
/*Driver function */
int main()
{
	string s;
	vector<string> vStr;
	unordered_map<string, int> wordCount;
	getline(cin, s);
	
	vStr = removeSpaces(s);
  wordCount = findWordCount(vStr);
   unordered_map<string, int>::iterator mItr;
   for(mItr = wordCount.begin(); mItr != wordCount.end(); mItr++)
   {
       cout<< mItr->first<< " -> "<< mItr->second<<"\n";
   }
	return 0;
}
