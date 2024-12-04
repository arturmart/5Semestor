
#include <iostream>
#include <stack>
using namespace std;

const char BRACKET_OPEN[3] = { '(','[','{' };

const char BRACKET_CLOSE[3] = {')', ']', '}'};


class BracketValid {
public:
    BracketValid(){}

    bool checkBracketValid(std::string& str) {

        clearSrack();
        
        
        for (int i = 0; i < str.size(); i++) {

            for (int j = 0; j < sizeof(BRACKET_OPEN); j++) {
                if (str[i] == BRACKET_OPEN[j]) {
                    stk.push(j);
                }
                else if (str[i] == BRACKET_CLOSE[j]) {
                    if (stk.top() == j) stk.pop();
                    else return false;
                    
                }
            }

        }

        return stk.empty();




    }
private:

    void clearSrack() {
        while (!stk.empty()) {
            stk.pop();
        }
    }

    stack<int> stk;
};



int main()
{
    BracketValid BV;
    std::string str;
    std::cout << "Input Text: ";
    std::cin >> str;

    if (BV.checkBracketValid(str)) {
        std::cout << "Text Brackets is Valid!\n";
    }
    else {
        std::cout << "Text Brackets is Incorrect!\n";
    }

    
}

