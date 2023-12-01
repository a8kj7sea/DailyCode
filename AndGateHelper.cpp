#include <iostream>
#include <list>
#include <string>

using namespace std;

class AndGateHelper {
 private:
  list<int> elements;

 public:
  AndGateHelper &append(int value) {
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
      if (element == 1) {
        index++;
      }
    }

    return (index == size);
  }
};

int main() {
  AndGateHelper andGateHelper;
  int x, y, z;
  cin >> x >> y >> z;

  andGateHelper.append(x).append(y).append(z);

  cout << andGateHelper.toBoolean();

  return 0;
}
