#include <iostream>
#include <glog/logging.h>
#include "util.hpp"


int main() {
    LOG(INFO) << "Hello, World!";
    int result = addition(3, 5);
    LOG(INFO) << "The result of addition is: " << result;

    return 0;
}
