
#include <iostream>
#include <vector>


class RepitNumbers {
public:
    int clearRepitNumbers(std::vector<int>& arr) {
        if(!isValidSort(arr) || !isValidRepeat(arr))
            throw std::invalid_argument("The array is invalid");

        int j = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] != arr[i - 1]) {
                arr[j] = arr[i];
                j++;
            }   
        }
        return j;
    }
    void printArr(std::vector<int> arr, int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    private:

    bool isValidSort(std::vector<int>& arr){

        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[i - 1]) {
                return false;
            }   
        }
        return true;

    }
    bool isValidRepeat(std::vector<int>& arr){


        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i - 1]) {
                return true;
            }   
        }
        return false;

    }



};


int main()
{
    std::vector<int> arr = { 1,2,3,3,3,5,8,8,9,10,11,12,15,16,16,16,20,20,21,22,25,25,30 };
    std::vector<int> arr2 = { 4, 1,2,3,3 };
    RepitNumbers rp;
    int size = arr2.size();
    try
    {
        size = rp.clearRepitNumbers(arr2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    rp.printArr(arr2,size);
}
