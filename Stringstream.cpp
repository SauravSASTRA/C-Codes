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

/*Driver function */
int main()
{
	string s;
	vector<string> vStr;
	getline(cin, s);
	
	vStr = removeSpaces(s);
    vector<string>::iterator vItr;
    for(vItr = vStr.begin(); vItr != vStr.end(); vItr++)
    {
        cout<< *vItr<<"\n";
    }
    

	return 0;
}
