//
//  StringUtil.cpp
//  TsuyuiUtil
//
//  Created by YU ZOU on 2019/3/13.
//  Copyright © 2019 YU ZOU. All rights reserved.
//

#include "StringUtil.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace TsuyuiUtil;

void split(const std::string& s,const std::string& delimiter, std::vector<std::string> segs )
{
    size_t pos = 0;
    std::string token;
    std::string target = s;
    while ((pos = target.find(delimiter)) != std::string::npos) {
        token = target.substr(0, pos);
        //std::cout << token << std::endl;
        segs.push_back(token);
        target.erase(0, pos + delimiter.length());
    }
    std::cout << s << std::endl;
    return;
}


