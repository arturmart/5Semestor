
#include <iostream>
#include <vector>
#include <utility>
#include <random>

class getTwoVarSum {
public:
    getTwoVarSum(std::vector<int>& v) { // Constructor with parameters
        setArr(v);
    }

    void setArr(std::vector<int>& v) {
        arr = v;
    }
    std::vector<int> getArr() {
        return(arr);
    }

    std::vector<std::pair<int, int>> ChechkSum(int sum) {
        std::vector<std::pair<int, int>> localVector;

        for (int i = 0; i < arr.size()-1; i++) {
            for (int j = i; j < arr.size(); j++) {
                if (arr[i] + arr[j] == sum) {
                    localVector.push_back(std::make_pair(i, j));
                }
            }
        }

        return localVector;

    }

    void printResult(std::vector<std::pair<int, int>> X) {
        for (int i = 0; i < X.size(); i++) {
            std::cout << arr[X[i].first]<<"["<<X[i].first<<"]" << " + " << arr[X[i].second]<<"["<<X[i].second<<"]" << std::endl;
        }
    }
    

private:
    std::vector<int> arr;

    
};

int main()
{
    srand(time(NULL));
    
    
    
    
    std::vector<int> vectorName;
    for(int i =0;i<20; i++){
        vectorName.push_back(rand()%10+1);
    }
    
    for(int i =0;i<vectorName.size();i++){
        std::cout<<vectorName[i]<<" ";
    }
    
    std::cout<<std::endl;
    
    getTwoVarSum myGTVS(vectorName);
    myGTVS.printResult(myGTVS.ChechkSum(10));
}
