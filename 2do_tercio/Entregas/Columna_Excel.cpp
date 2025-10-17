#include <iostream>
#include <string>
class Solution{
    public:
    int titleToNumber(std::string columnTitle){
        int result = 0;
            for(char c : columnTitle){
                result = result * 26 + (c - 'A' + 1);
            }
            return result;
        }
};
int main(){
    Solution sol;
    std::string columnTitle;
    std::cout << "Enter Excel column title: ";
    std::cin >> columnTitle;
    int columnNumber = sol.titleToNumber(columnTitle);
    std::cout << "Column number: " << columnNumber << std::endl;
    return 0;
}