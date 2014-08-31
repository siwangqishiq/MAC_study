//
//  Hello.c
//  第一个C程序
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>
#include "test.h"

int main()
{
    printf("Hello World!\n你好 世界\n");
    
    test();//test函数调用
    add(13, 15);//add函数被调用
    
    return 0;
}

