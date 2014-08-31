//
//  test.c
//  第一个C程序
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

void test()
{
    printf("Test()函数被调用！\n");
}//end function test()

int add(int a,int b)
{
    int ret = a + b;
    printf("%d + %d = %d\n",a,b,ret);
    
    return ret;
}//end add function
