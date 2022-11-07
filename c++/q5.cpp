#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        char v1[8][8];
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cin>>v1[j][k];
            }
            
        }
        
        for (int j = 0; j < 8; j++)
        {
            int c=0, e=0;
            for (int k = 0; k < 8; k++)
            {
                if (v1[j][k]=='R')
                {
                    c++;
                }

                if (v1[k][j]=='B')
                {
                    e++;
                }
                
            }
            if (e==8)
            {
                cout<<"B"<<endl;
                break;
            }
            if (c==8)
            {
                cout<<"R"<<endl;
                break;
            }
            
            
            
        }
        
    }
    
    return 0;
}