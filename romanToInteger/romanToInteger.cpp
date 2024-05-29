#include <iostream>
#include <string>

class Solution{
    public:
    int romanToInt(std::string s){
        int temp = 0;
        for (int i = s.size()-1; i >= 0; i--){
            switch(tolower(s[i])){
                case 'i':
                    temp += 1;
                    break;
                case 'v':
                    (tolower(s[i-1]) == 'i') ? temp += 4, i-- : temp += 5;
                    break;
                case 'x':
                    (tolower(s[i-1]) == 'i') ? temp += 9, i-- : temp += 10;
                    break;
                case 'l':
                    (tolower(s[i-1]) == 'x') ? temp += 40, i-- : temp += 50;
                    break;
                case 'c':
                    (tolower(s[i-1]) == 'x') ? temp += 90, i-- : temp += 100;
                    break;
                case 'd':
                    (tolower(s[i-1]) == 'c') ? temp += 400, i-- : temp += 500;
                    break;
                case 'm':
                    (tolower(s[i-1]) == 'c') ? temp += 900, i-- : temp += 1000;
                    break;
            }        
        }
        return temp;
    }
};


void print(int convert){

}


int main(){

    Solution solver;
    std::cout << solver.romanToInt("mcmxciv");

    return 0;
}