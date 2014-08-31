//
//  main.c
//  prinf函数使用
//
//  Created by  潘易  on 14-8-31.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>


/**
 代码格式化 快捷键 Control+i
 */
int main(int argc, const char * argv[])
{
//    test();

    printf("帝国の興廃皇国運命その戦!\n");//输出日文
    
    printf("My name is %s,height is %f,sex is %c\n","东乡平八郎",1.83f,'M');
    
    printf("My name is %s,height is %.2f,sex is %c\n","东乡平八郎",1.83f,'M');
    
    printf("My age is %5d,height is %5.2f,sex is %c\n",13,1.83f,'M');
    
    printf("My age is %-5d,height is %-10.3f,sex is %c\n",14,1.53f,'M');
    
    return 0;
}



