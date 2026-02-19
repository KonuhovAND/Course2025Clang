#define _USE_MATH_DEFINES
#include <iostream>
#include <regex>
#include <string>
#include <fstream>
using std::cout, std::cin, std::endl;
using std::string;
void spacer() { cout << "\n" << string(18, '-') << "\n"; }
void readFile(const string& path) {
    std::fstream fs;
    fs.open(path, std::ios::in);
    if (!fs.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }
    string line;
    while (std::getline(fs, line)) {
        cout << line << endl;
    }
    fs.close();
}

void earaseFile(const string& path) {
    std::fstream fs;
    fs.open(path, std::ios::out);
    if (!fs.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }    
    fs.close();
}

int main(){
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    string buffer;
    std::getline(cin, buffer); 
    double area =  M_PI * radius * radius;
    cout << "Area: " << area << endl;
    cout << "Rounded area: " << trunc(area*1000 + .5) / 1000 << endl;

    string text;
    std::fstream fs;
    fs.open("output.txt", std::ios::app);
    if (!fs.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    } else while (true){
        cout << "enter text or 'exit' to quiet" << endl;

        std::getline(cin, text);
        if (text == "exit") break;
        else if (text =="read") readFile("output.txt");
        else if(text == "earase") earaseFile("output.txt");
        else fs << text << endl;
        
    }
    fs.close();
}



