#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

//http://www.cplusplus.com/reference/algorithm/lower_bound/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size=0, querysize=0, sdigit=0, temp=0;
    vector<int> varray;
    cin>>size;
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    for(int i=0; i< size; i++)
    {
        cin>>temp;
        varray.push_back(temp);
    }
    
    cin>>querysize;
    
    for(int i=1; i<=querysize; i++)
    {
        int found=0;
        //vector<int> diff;
        cin>>sdigit;
        for(int j=0; j < varray.size(); j++)
        {
            if(sdigit == varray[j])
            {
                cout<<"Yes "<<j+1<<endl;
                found = 1;
                break;
            }
        }
        if(!found)
        { 
            vector<int> diff;
            for(int j=0; j < varray.size(); j++)
            {
               diff.push_back(abs(varray[j]-sdigit));
            }

            //sort(diff.begin(), diff.end());
            int sindex=0;
            //3 3 2 2 2 5 5 11 
            for(int j=1; j<diff.size(); j++)
            {
                //cout<<"compare"<<diff[sindex]<<"and"<<diff[j]<<endl;
                if(diff[sindex]>=diff[j])
                    sindex = j;
                //cout<<"sindex = "<<sindex<<endl;
            }
            //cout<<endl<<"sindex= "<<sindex<<endl;
            cout<<"No "<<sindex+1<<endl;
        }
    }
    return 0;
}
