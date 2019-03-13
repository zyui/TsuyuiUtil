//
//  main.cpp
//  TsuyuiUtil
//
//  Created by YU ZOU on 2019/3/12.
//  Copyright © 2019 YU ZOU. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "StringUtil.hpp"

int main(int argc, const char * argv[]) {
    std::string s ="Hello, World! My name is Tsuyui";
    std::cout << s << std::endl;

    std::vector<std::string> segs;
    TsuyuiUtil::split(s, " ", segs);
    
    for(size_t i = 0; i < segs.size();i++){
        std::cout << segs[i] << std::endl;
    }
    
    return 0;
}
