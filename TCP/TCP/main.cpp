//
//  main.cpp
//  TCP
//
//  Created by AKSHAY SUNDERWANI on 13/10/17.
//  Copyright © 2017 AKSHAY SUNDERWANI. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Server/Server.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Server serverObj;
    serverObj.handleSocketWork();
    std::cout << "Hello, World! : %d\n"<<serverObj.getProtNumberForSocket();
    return 0;
}
