#include <iostream>
#include <list>
#include <vector>


template <class T>
class HTable {
public:

    HTable() {
        list.resize(capacity);

    }


    void insert(std::string key, T value) {

        if (numOfElements > capacity * 3 / 4) reSize(2 * capacity);

        int index = hash(key);
   
        list[index].emplace_back(key, value);
        numOfElements++;

        //if (list[index].empty()) list[index].push_back(value);


    }
    void insert(std::vector< std::list<std::pair<std::string, T>>>& otherList, std::string key, T value) {



        int index = hash(key);

        otherList[index].emplace_back(key, value);


        //if (list[index].empty()) list[index].push_back(value);


    }
    int hash(const std::string key) const {
        //character * PrimeNumberx. Where x = 1, 2, 3….n
        
        int sum = 0;
        int factor = 31;
        for (int i = 0; i < key.size(); i++) {
            //std::cout << "key[" << key << "][" << i << "]:" << (int)key[i] << '\n';
            //sum = sum % capacity + ((int)key[i] * PRIME_FACTOR) % capacity;
            sum = ((sum % capacity) + (((int)key[i]) * factor) % capacity) % capacity;
            //std::cout << "sum " << sum << '\n';

            factor = ((factor % INT16_MAX) * (31 % INT16_MAX)) % INT16_MAX;
            //std::cout << "factor "<< factor << '\n';
        }


        return sum;
    }
    T search(const std::string key) {

        int index = hash(key);

        if (list[index].size() == 1) return (list[index].front().second);
        else if (list[index].size() > 1) {

            for (auto iter = list[index].begin(); iter != list[index].end(); iter++) {
                if ((*iter).first == key) {
                    return (*iter).second;
                    break;
                }


            }
            return T();
        }
        else {
            return T();
        }

    }
  
    T operator[](std::string kay)
    {
        return search(kay);
    }
   

    void reSize(int newSize) {
        std::vector< std::list<std::pair<std::string, T>>> newList;
        newList.resize(newSize);

        capacity = newSize;

        for (int i = 0; i < list.size(); i++) {

            for (std::pair<std::string, T > element : list[i]) {
                insert(newList, element.first, element.second);
            }

        }

        list = newList;



    }
    void printHTable() const {
        for (int i = 0; i < list.size(); i++) {
            std::cout << "[" << i << "]\t";
            for (std::pair<std::string, T > element : list[i]) {
                std::cout << "(\"" << element.first << "\" , \"" << element.second << "\")" << ",\t";
            }
            std::cout << std::endl;
        }
    }
    int  count() {
        return numOfElements;
    }
    int  size() {
        return capacity;
    }

    void setValue(std::string key, T value) {

        int index = hash(key);

  

        if (list[index].size() == 1) {
            list[index].front().second = value;

           
        }
        else if (list[index].size() > 1) {
            
            for (auto iter = list[index].begin(); iter != list[index].end(); iter++) {
                if ((*iter).first == key) {
                    (*iter).second = value;
                    break;
                    

                }
               
            }

        }


    }

    void deleteKey(const std::string key) {
        int index = hash(key);

        //list[index].clear();

        if (list[index].size() == 1) {
            list[index].clear();
            numOfElements--;
        }
        else if (list[index].size() > 1) {
            auto begin = list[index].begin();
            for (std::pair<std::string, T > element : list[index]) {
                if (element.first == key) {
                    list[index].erase(begin);
                    break;
                    numOfElements--;

                }
                begin++;
            }

        }



    }


    std::vector< std::list<std::pair<std::string, T>>> list;
    //std::vector< std::list<std::string>> list;

    int numOfElements = 0;
    int capacity = 16;


};


int main()
{
    /*
    HTable<int> ht;


    std::string str = "Hello";

    ht.insert("The cat chased mice.", 1);
    ht.insert("Stars twinkle in the night.", 2);
    ht.insert("He loves chocolate ice cream.", 3);
    ht.insert("Birds sing in the morning.", 4);
    ht.insert("Clouds drift across the sky.", 5);
    ht.insert("They danced in the rain.", 6);
    ht.insert("The sun sets quickly.", 7);
    ht.insert("She laughed at his joke.", 8);
    ht.insert("Cars honked on the street.", 9);
    ht.insert("He read the mystery novel.", 10);
    ht.insert("Flowers bloom in springtime.", 11);
    ht.insert("I cooked dinner last night.", 12);
    ht.insert("The dog barked loudly.", 13);
    ht.insert("Water flows in the river..", 14);
    ht.insert("We played soccer all day.", 15);
    ht.insert("The moon glowed softly.", 16);

    ht.deleteKey("We played soccer all day.");
    ht.deleteKey("He loves chocolate ice cream.");

    

    ht.setValue("The cat chased mice.", 64);
    ht.setValue("I cooked dinner last night.", 100);

    ht.printHTable();

    std::cout << ht["Cars honked on the street."] << std::endl;
    std::cout << ht["I cooked dinner last night."] << std::endl;
    */


    std::string word1 = "hello world d";
    std::string word2 = "wello d horld";

    HTable<int> ht1;
    HTable<int> ht2;

    for (int i = 0; i < word1.size(); i++) {
        std::string src = std::string{ word1[i] };
        //std::cout << src;
        if (ht1.search(src)) ht1.setValue(src, ht1[src] + 1);
        else ht1.insert(src, 1);
    }

    for (int i = 0; i < word2.size(); i++) {
        std::string src = std::string{ word2[i] };
        if (ht2.search(src)) ht2.setValue(src, ht2[src] + 1);
        else ht2.insert(src, 1);
    }
    ht1.printHTable();
    std::cout << std::endl;
    ht2.printHTable();
    std::cout << std::endl;


    bool flag = true;
    for (int i = 0; i < word1.size(); i++) {
        std::string src = std::string{ word1[i] };
        if (ht1.search(src)) {
            if (ht1[src] != ht2[src]) {
                flag = false;
                break;
            }
        }
    }
    if(flag) std::cout << "True";
    else  std::cout << "False";

    //HTable<int> ht;






}
