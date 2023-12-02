# DailyCode
Simple c++ code everyday 


# Second Code {AndGateHelper}

[AndGateHelper](https://github.com/a8kj7sea/DailyCode/blob/main/AndGateHelper.cpp)


# **AndGateHelper**

It is a class that helps you in logical solutions, where you input possibilities for a specific thing and obtain the result. However, for the AND gate, its necessary condition for occurrence is that 1 appears in all possibilities


A simple example of the class that demonstrates the concept, let's assume we want to verify whether a person is suitable for a job or not.

- First, we check if his age is greater than or equal to 24.
- We verify if he holds a bachelor's degree in the required field.
- We check if he has the required experience

```cpp
#include <iostream>
#include <string>

#include <AndGateHelper.cpp>

using namespace std;

int main() {
  AndGateHelper andGateHelper;
  
  int old;
  char choiceForCertificate; // User's choice for certificate (y for yes, n for no)
  char choiceForExperience; // User's choice for experience (y for yes, n for no)

  cout << "Please enter your old :\n";
  cin >> old;
  cout << "Did you have Bachelor's degree of Software engineering : (Please answer with y or n) \n";
  cin >> choiceForCertificate;
  cout << "Did you have the enough Experience to this job : (Please answer with y or n) \n";
  cin >> choiceForExperience;
  
  if (choiceForCertificate == 'y' || choiceForCertificate == 'Y') {
     andGateHelper.append(1); // true
  } else {
    andGateHelper.append(0); // false
  }

 
  if (choiceForExperience == 'y' || choiceForExperience == 'Y') {
     andGateHelper.append(1); // true
  } else {
    andGateHelper.append(0); // false
  }

  if (old >= 24) {
     andGateHelper.append(1); // true
  } else {
    andGateHelper.append(0); // false
  }

  
  bool result= andGateHelper.toBoolean(); // get the result (true or false) 
  
  if (result) { // if true
      cout << "congratulations !\n";
  } else {  
    cout << "Sorry you do not have complete/enough terms ";
  }  

  return 0;
}

```
 
Look at the picture, it illustrates the program's operation and the output
![image](https://github.com/a8kj7sea/DailyCode/assets/104179839/5fc2a5b1-8082-46e5-8f64-a2c5f82b823a)



[To Execute Code online](https://onlinegdb.com/meJZUlBmZ)


