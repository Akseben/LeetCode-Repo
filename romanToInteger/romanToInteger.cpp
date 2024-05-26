#include <iostream>
#include <string>

class Solution{
    public:
    int romanToInt(std::string s){
        int temp = 0;


        for (int i = s.size()-1; i >= 0; i--){
            if (tolower(s[i]) == 'v'){
                temp += 5;
                if(tolower(s[i-1]) == 'i'){
                    temp -= 1;
                }
            }
        }

        return temp;
    }
};


void print(int convert){

}


int main(){

    Solution solver;
    std::cout << solver.romanToInt("IV");

    return 0;
}