
#include <iostream>
#include <vector>


class RepitNumbers {
public:
    void clearRepitNumbers(std::vector<int>& arr) {
        int buf = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (buf == arr[i]) {
                arr.erase(arr.begin() + i);
                i--;
                
            }
            else {
                buf = arr[i];
                
            }
        }
    }
    void printArr(std::vector<int> arr) {
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << "\t";
        }
        std::cout << std::endl;
    }
};


int main()
{
    std::vector<int> arr = { 1,2,3,3,3,5,8,8,9,10,11,12,15,16,16,16,20,20,21,22,25,25,30 };
    std::vector<int> arr2 = { 1,2,3};
    RepitNumbers rp;
    rp.clearRepitNumbers(arr);
    rp.printArr(arr);
}

