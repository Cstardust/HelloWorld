#include <iostream>
#include <vector>
using namespace std;
//  window 添加了注释
int main()
{
    const int a = 10;
    int array[a];   //  C++中的const得到的是常量，可以用定义数组。（在编译时期就替换为10）

    int *p = (int*)&a;  //  注意需要强转
    *p = 20;        //  实际上a的内存已经被改变！！！！

    //  a出现的地方已经被编译器替换成10
    cout<<*p<<" "<<a<<" "<<*(&a)<<endl;
    //  20         10       10
    
    vector<int> vec(a);
    for(int i=0;i<10;++i)
    {
	 vec.emplace_back(i);
    }



    // C中的const可以不用初始化，但一定不能赋值
    //  ubuntu 添加的注释
	//  C中的const应该叫做常变量

    //  c中const修饰的变量是当作一个变量来编译生成指令的
    //  只是在语法层面进行更改赋值，但仍可以通过指针对其内存进行修改
}
