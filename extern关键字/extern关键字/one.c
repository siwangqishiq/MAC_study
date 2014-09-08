//
//  one.c
//  extern关键字
//
//  Created by  潘易  on 14-9-7.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

static void two()
{
    printf("two 调用\n");
}

void one(int a)
{
    printf("one被调用 ---> %d  \n",a);
    two();
}