#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> rmap;
        rmap['I'] = 1;
        rmap['V'] = 5;
        rmap['X'] = 10;
        rmap['L'] = 50;
        rmap['C'] = 100;
        rmap['D'] = 500;
        rmap['M'] = 1000;
        int num = 0;
        int i = 0;
        if(s.length()<=1){
            return rmap[s.at(0)];
        }else{
            while(i < s.size()){
                if(rmap[s[i]]<rmap[s[i+1]]){
                    num+=rmap[s[i+1]]-rmap[s[i]];
                    i+=2;
                }else{
                    num+=rmap[s[i]];
                    i++;
                }
            }
        }
        return num;
    }
    
    int main(){
        string rom;
        cout << "Enter a Roman Numeral: ";
        getline(cin, rom);
        
        int num;
        num = romanToInt(rom);
        
        cout << "Integer is: " << endl;
        return 0;
    }
};