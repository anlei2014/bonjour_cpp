#include <iostream>

using namespace std;


/**
 *  const int *p = &a;
 *  常量指针
 *  特点：指针的指向可以修改，但是指针指向的值不可以修改
 *
 *  demo
 *  *p = 20; 错误，指针指向的值不可以修改
 *  p = &b; 正确，指针指向可以修改
 * */


/**
 *
 * int * const p = &a;
 * 指针常量
 *
 * 特点：指针的指向不可以改，指针指向的值可以修改
 *
 * demo
 * *p = 20; 正确，指向的值可以修改
 * p = &b; 错误，指针指向不可以修改
 * */

//const int *p = &a;    //
/*
int *p = &a; //初始化一个int *类型指针，同时将变量a的地址存入p指针
这里是一个特殊用法，仅在初始化变量的时候可以使用，应分为两个部分去进行理解。
int *p; //初始化一个int * 类型指针p
p = &a; //将变量a的地址存入p指针，此时p表示变量a的地址
*p = a; //表示指针p指向变量a，这时*p表示变量a的数值
区别在于在指针中p表示一个地址，存储的是变量的位置。
*p表示一个变量，存储的是一个值。
在初始化变量之外使用*p = &a;是错误的，提示不能将int * 类型的值分配到int类型的实体。
*/

int main() {

    //1.const修饰指针，常量指针
    int a = 10;
    int b = 10;

    const int *p = &a;    //
    p = &b;
    std::cout << *p << std::endl;

    //2.
    int * const p2 = &a;
    *p2 = 100;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
