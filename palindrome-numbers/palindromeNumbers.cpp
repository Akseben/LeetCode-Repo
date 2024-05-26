#include <iostream>
#include <string>

class Solution{
    public:
        bool palindrome(int x){
            if (x < 0) {
                return false;
            }

            long long reversed = 0;
            long long temp = x;

            while (temp != 0) {
                int digit = temp % 10;
                std::cout<< "digit val:" << digit;
                reversed = reversed * 10 + digit;
                std::cout << "   reversed be:" <<reversed << std::endl;
                temp /= 10;
            }

            return (reversed == x);
        }


};


void print(bool x){
    (x) ? std::cout << "Yes!" : std::cout<< "no :<"; 
}


int main() {
    Solution solver;
    int y = 432756;

    print(solver.palindrome(y));
}