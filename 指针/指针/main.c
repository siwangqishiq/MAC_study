//
//  main.c
//  指针
//
//  Created by  潘易  on 14-9-1.
//  Copyright (c) 2014年 xinlan. All rights reserved.
//

#include <stdio.h>

void test1()
{
    int a;
    a=10;
    
    int *b;
    b=&a;
    
    int *c;
    c = b;
    
    *c = 100;
    
    printf("%d\n",a);
}

void test2()
{
    char a;
    char *b;//定义指针变量b 只能指向char类型的变量
    b = &a;//让指针变量b指向a
    
    //
    *b = 10;//指针运算符  代表访问b所存地址的存贮空间
    
    printf("%d \n",a);
    a=13;
    printf("%d \n",*b);
    
}

void  test3()
{
    char a=10;
    char *b=&a;
    
    char *p="haha 哈哈";
    printf("%s \n",p);
}

void addAndMin(int a,int b,int *addRet,int *subRet)
{
    //*addRet = (*a)+(*b);
    //*subRet = (*a)-(*b);
    
    *addRet = a+b;
    *subRet = a-b;
}

//指针与数组
void testArray()
{
    int a[2];
    int *p;
    p=&a[0];
    
    *p=7;
    
    printf("%x \n",*p);
    printf("%x \n",a[0]);
    
    //利用指针遍历数组
    int a1[10]={1,2,3};
    p=&a1[0];
    
    for(int i=0;i<10;i++)
    {
        printf("%d,%x   ",*(p),p);
        p++;
    }//end for i
    p=a1;
    printf("\n");
    
    char a2[]={10,9,8};
    char *p2=a2;
    
    for(int i=0;i<sizeof(a2)/sizeof(char);i++)
    {
        printf("a[%d] = %d  ",i,*(p2+i));
    }//end for i
    
    printf("\n");
}

void setSubArray(int *p)
{
    *(p+1)=23;
}

void testSetArray()
{
    int a[10]={};
    setSubArray(a);
    printf("a[%d] = %d \n",2,*(a+1));
}

char * getString()
{
    return "hehe  你好 世界  HelloWorld!\n";
}

int add(int a,int b)
{
    int ret = a + b;
    printf("%d + %d = %d\n",a,b,ret);
    return ret;
}

int substract(int a,int b)
{
    int ret = a - b;
    printf("%d - %d = %d\n",a,b,ret);
    return ret;
}

int calculate(int a,int b,int (*cal)(int,int))
{
    return cal(a,b);
}

//返回指针的函数
void testFunction()
{
    printf("函数返回字符串--> %s\n",getString());
    
    // 指向函数的指针
    // 函数名
    //add(3,4);
    int (*p)(int,int);
    p = add;
    p(100,12);
    
    calculate(100, 1, substract);
    
    calculate(100, 1, add);
}


//void test(int &a,int &b)
//{
//    a=10;
//    b=10;
//}

int main(int argc, const char * argv[])
{
    
    // insert code here...
    test3();
    test2();
    test1();
    
    int a=10;
    int b=4;
    int addRet=0,minRet=0;
    
    printf("函数执行前   ---> addRet = %d , minRet = %d \n",addRet,minRet);
    
    addAndMin(a,b,&addRet,&minRet);
    
    printf("函数执行后   ----> addRet = %d , minRet = %d \n",addRet,minRet);
    
    testArray();
    
    testSetArray();
    
    testFunction();
    
    return 0;
}

