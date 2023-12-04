#include <iostream>
#include <string>
#include <list>

using namespace std;

/**
 * @brief A class for building strings through appending various types.
 */
class StringBuilder {
private:
    string result = ""; /**< The final result string. */
    list<string> strings; /**< List to store individual string components. */

public:
    /**
     * @brief Constructor to initialize StringBuilder with a starting text.
     * @param text The initial text to start the StringBuilder with.
     */
    StringBuilder(string text) {
        this->strings.push_back(text);
    }

    /**
     * @brief Default constructor to initialize an empty StringBuilder.
     */
    StringBuilder() {}

    /**
     * @brief Appends a string to the StringBuilder.
     * @param value The string to append.
     * @return Reference to the current StringBuilder for method chaining.
     */
    StringBuilder &append(string value) {
        this->strings.push_back(value);
        return *this;
    }

    /**
     * @brief Appends an integer to the StringBuilder.
     * @param value The integer to append.
     * @return Reference to the current StringBuilder for method chaining.
     */
    StringBuilder &append(int value) {
        this->strings.push_back(to_string(value));
        return *this;
    }

    /**
     * @brief Appends a float to the StringBuilder.
     * @param value The float to append.
     * @return Reference to the current StringBuilder for method chaining.
     */
    StringBuilder &append(float value) {
        this->strings.push_back(to_string(value));
        return *this;
    }

    /**
     * @brief Appends a character to the StringBuilder.
     * @param value The character to append.
     * @return Reference to the current StringBuilder for method chaining.
     */
    StringBuilder &append(char value) {
        this->strings.push_back(to_string(value));
        return *this;
    }

    /**
     * @brief Appends a double to the StringBuilder.
     * @param value The double to append.
     * @return Reference to the current StringBuilder for method chaining.
     */
    StringBuilder &append(double value) {
        this->strings.push_back(to_string(value));
        return *this;
    }

    /**
     * @brief Converts the StringBuilder content to a single string.
     * @return The final concatenated string.
     */
    string toString() {
        for (const auto &element : strings) {
            result = result + element;
        }

        return result;
    }
};

/**
 * @brief Main function to demonstrate the usage of the StringBuilder class.
 * @return Exit code.
 */
int main() {
    // Create a StringBuilder instance
    StringBuilder strBuilder;

    // Append various types of values to the StringBuilder
    strBuilder.append("Hello ").append("World !!").append("\n");

    // Print the final concatenated string
    cout << strBuilder.toString();

    return 0;
}
