//
//  main.c
//  预处理指令
//
//  Created by  潘易  on 14-9-6.
//  Copyright (c) 2014年 xinlan. All rights reserved.

// 宏定义
// 文件包含
// 条件编译
//

#include <stdio.h>

#include "one.h"
#include "two.h"

#define ARRAY_NUM 5

void test1()
{
    char a[ARRAY_NUM]={1,2,3,4,5};
    for(int i=0;i<ARRAY_NUM;i++)
    {
        printf("a[%d] = %d \n",i,*(a+i));
    }//end for i
}

#define SUM(a,b)  a+b

void test2()
{
    int c = SUM(13,12);
    printf("%d\n",c);
}

#define MUL(a,b) ((a)*(b))

void test3()
{
    int c = MUL(10, 3);
    printf("%d \n",c);
}


#define NUM -10

int main(int argc, const char * argv[])
{
    // insert code here...
    test3();
    // 条件编译
#if NUM > 0
    printf("Num值大于0\n");
#elif NUM==0
    printf("Num值等于0\n");
#else
    printf("Num值小于0\n");
#endif
    
    //文件包含
    
    return 0;
}//end main










