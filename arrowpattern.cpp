#include <bits/stdc++.h>
//#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

vector<string> printArrowPattern(int n)
{
    vector<string>pattern;
   // vector<string>star;
    for(int i=1;i<=n;i++){
        string line;
        for(int j=1;j<=i;j++){
             line += ' ';
            
        }
        for(int k=1;k<=i;k++){
             line += '*';
        }
         //cout<<endl;
         pattern.push_back(line);
       
    }
     for(int i=n-1;i>=1;i--){
        string line;
        for(int j=i;j>=1;j--){
             line += ' ';
            
        }
        for(int k=i;k>=1;k--){
              line += '*';
        }
        // cout<<endl;
       pattern.push_back(line);
    }
    return pattern;
   
    
}
int main() {
    int n = 5; // Example input
    std::vector<std::string> arrowPattern = printArrowPattern(n);

    for (const auto& line : arrowPattern) {
        std::cout << line << std::endl;
    }
  
    return 0;
}
