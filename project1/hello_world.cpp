#include <iostream>
#include <glog/logging.h>
#include "util.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main() {
    LOG(INFO) << "Hello, World!";
    int result = addition(3, 5);
    LOG(INFO) << "The result of addition is: " << result;

    json ex1 = json::parse(R"(
        {
          "pi": 3.141,
          "happy": true
        }
      )");

    LOG(INFO) << ex1;
    

    return 0;
}
