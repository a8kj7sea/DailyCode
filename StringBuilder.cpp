#include <iostream>
#include <string>
#include <list>

using namespace std;

class StringBuilder {


    private:
        string result = "";
        list<string> strings;

    public:
        StringBuilder(string text) {
            this->strings.push_back(text);
        }

    
        StringBuilder() {}

        StringBuilder& append(string value){
            this->strings.push_back(value);
            return *this;
        }

        StringBuilder &append(int value){
            this->strings.push_back(to_string(value));
             return *this;
        }
        StringBuilder &append(float value){
           this->strings.push_back(to_string(value));
           return *this;
        }

        StringBuilder &append(char value){
           this->strings.push_back(to_string(value));
            return *this;
        }

        StringBuilder &append(double value){
            this->strings.push_back(to_string(value));
            return *this;
        }

        
        string toString(){
            
            for (const auto &element : strings){
                result = result + element;
            }

            return result;
        }


};


int main() {

    StringBuilder strBuilder;

    strBuilder.append("Hello ").append("World !!").append("\n");


    cout << strBuilder.toString();

    return 0;
}
