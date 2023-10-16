#include <iostream>
#include <map>
#include <vector>


int main(){
    std::map <char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    std::string ins;
    std::cin >> ins;
    
    std::vector <char> list;
    
    for (char c : ins){
        list.push_back(c);
    }
    
    int ans = 0;
    for (int i = 0; i < list.size(); i++){
        if (mp[list[i]] < mp[list[i + 1]]){
            ans -= mp[list[i]];
        }
        else{
            ans += mp[list[i]];
        }
    }

    std::cout << ans;

}