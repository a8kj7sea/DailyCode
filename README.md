# DailyCode
Simple c++ code everyday 

# First Code (StringBuilder)
 
[StringBuilder](https://github.com/a8kj7sea/DailyCode/blob/main/StringBuilder.cpp)

# **StringBuilder**

It is a class used in the C++ programming language, designed to assist in building or creating text strings efficiently. Its benefit lies in avoiding the use of repetitive operations to concatenate strings, and it helps improve program performance when dealing with large amounts of textual data. Simply put, it is a tool that aids in constructing texts in an efficient and fast manner


Simple example 
```cpp
#include <iostream>
#include <string>

#include <StringBuilder.cpp>

int main() {
  StringBuilder strBuilder;
  strBuilder.append("Hello ").append(" World !!").append("\n").append("My name is a8kj").append("\n");
  cout << strBuilder.toString();
  
  return 0;
}

```


```cpp

Object.append(); // Used to add/append items or strings or type in string
Object.toString(); // after finish append ... blabla you should convert them to string by toString();
```

output :
```


Hello  World !!
My name is a8kj

```



[Execute Code online](https://onlinegdb.com/onvVqu89NR)


<br><br><br><hr><br><br><br>


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


<br><br><br><hr>
# Third Code (OrGateHelper)

[OrGateHelper](https://github.com/a8kj7sea/DailyCode/blob/main/OrGateHelper.cpp)


# **OrGateHelper**

It is a class that helps you with logical solutions, allowing you to input possibilities for a specific thing and obtain the result. However, for the 'OR' gate, in order to negate its condition, it requires all possibilities are  yield 0, with just one instance of 1 being sufficient to make the result true. It is an optional logical gate.

0 + 0 + 0 = 0
<br>
0 + 0 + 1 = 1



Simple Example of a Class Illustrating the Idea: Let's assume we want to check if a person is likes one or all of the following fruits:

- Apple
- Banana
- Kiwi
<br><br><br>
- First, we check if he likes apples.
- Second, we check if he likes bananas.
- Lastly, we check if he likes kiwis.


```cpp
#include <iostream>
#include <string>

#include <OrGateHelper.cpp>

using namespace std;

int main() {
  OrGateHelper orGateHelper;
  
 
  char choiceForApple; // User's choice for Apple (y for yes, n for no)
  char choiceForBanana; // User's choice for Banana (y for yes, n for no)
  char choiceForKiwii; // User's choice for Kiwii (y for yes, n for no)

  cout << "Did you like Apple :\n";
  cin >> choiceForApple;
  cout << "Did you like Banana :\n";
  cin >> choiceForBanana;
  cout << "Did you like Kiwii :\n";
  cin >> choiceForKiwii;
  
  if (choiceForApple== 'y' || choiceForApple== 'Y') {
     orGateHelper.append(1); // true
  } else {
    orGateHelper.append(0); // false
  }

 if (choiceForBanana== 'y' || choiceForBanana== 'Y') {
     orGateHelper.append(1); // true
  } else {
    orGateHelper.append(0); // false
  }

  if (choiceForKiwii== 'y' || choiceForKiwii== 'Y') {
     orGateHelper.append(1); // true
  } else {
    orGateHelper.append(0); // false
  }

  
  bool result= orGateHelper.toBoolean(); // get the result (true or false) 
  
  if (result) { // if true
      cout << "I glad to hear that !\n";
  } else {  // if all of inputs as 0 
    cout << "That seem You don't like anything from these fruit :L !\n";
  }  

  return 0;
}

```
 
Check the image for an explanation of how the program works and the output

![image](https://github.com/a8kj7sea/DailyCode/assets/104179839/21a03358-cf91-41c4-ae35-74bbfb7b6c04)

[To Execute Code online](https://onlinegdb.com/yxLEo9IfYb)
