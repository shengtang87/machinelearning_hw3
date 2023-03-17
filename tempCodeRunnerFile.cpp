#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 18;
    set<set<int>> ss;
    for(int i=0;i<n;i++){
        int g=0;
        set<int> s={};  
        s.insert(g);
        for(int j=0 ; j<n;j++){      
            g+=i;
            g=g%n;      
            s.insert(g);
        }
        if(ss.find(s) == ss.end()){
            ss.insert(s);
            cout<<"generator: "<<i<<endl;
            for (const auto &e : s) {
                std::cout << e << " ";
            }cout<<"-----element num: "<<s.size()<<endl;
        }
    }
}