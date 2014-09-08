//
//  main.c
//  extern关键字
//
//  Created by  潘易  on 14-9-7.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>
#include "one.h"

int main(int argc, const char * argv[])
{

    one(123);
    //two(); 内部函数不能被调用
    return 0;
}

