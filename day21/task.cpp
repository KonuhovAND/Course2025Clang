#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <vector>
#include <random>  

int enterVector(std::vector<int>& vector) {
    while (true) {
        int a;
        std::cout << "Enter int number (or any letter to exit): ";
        std::cin >> a;
        
        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            break;
        }
        
        vector.push_back(a);
    }
    return 0;
}
void printVector(std::vector <int> vector){
    for (auto i = vector.begin(); i != vector.end(); i++){
        std::cout << *i << " ";
    }
}

void spacer(){
    std::cout <<"\n" <<"--------------" << "\n";
}


int main(){
    std::vector<int> numbers = {};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,100);
    for (int i = 0; i < 5 ; i++){
        numbers.push_back(dist(gen)); 
    } 
    

    spacer();
    std::vector <int> mynums;
    enterVector(mynums);
    printVector(mynums);

    spacer();
    for (auto i = numbers.begin();i != numbers.end(); i++){
        std::cout  << *i << " " ;
    }
    spacer();
    
    auto i = numbers.begin();
    i +=2;
    *i = 67;
    i++;
    *i = 68;
    spacer();
    printVector(numbers);

    return 0;
}