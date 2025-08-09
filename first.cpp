#include <iostream>
#include <string>

std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

int main() {
    std::string user = "SonarQube";
    std::cout << greet(user) << std::endl;
    return 0;
}
