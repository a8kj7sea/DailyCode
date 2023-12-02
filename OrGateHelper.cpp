#include <iostream>
#include <list>
#include <string>

using namespace std;

class OrGateHelper {
 private:
  list<int> elements;

 public:
  OrGateHelper &append(int value) {
    if (value > 0 || value < 0) {
      this->elements.push_back(1);
    } else {
      this->elements.push_back(0);
    }
    return *this;
  }

  bool toBoolean() {
    int index = 0;
    int size = elements.size();
    for (const auto &element : elements) {
      if (element == 0) {
        index++;
      }
    }

    return (index == size) ? false : true;
  }
};

int main() {
  OrGateHelper orGateHelper;
  int x, y, z;
  cin >> x >> y >> z;

  orGateHelper.append(x).append(y).append(z);

  cout << orGateHelper.toBoolean();

  return 0;
}
