# c_cpp_mix_demo
C和C++混编测试

程序很简单，涉及到的东西：

- `recentcounter.cpp`/`recentcounter.h`: 一个简单的C++类，由leetcode 933改编。涉及头文件的`#ifndef`块，C++ class中方法的定义声明分离写法。
- `linkqueue.h`/`linkqueue.hpp`：利用泛型封装的一个简单的模板类，为链表实现的队列。对于C++模板类，采用.h+.cpp的分离写法会导致make失败，故将用来写定义的.cpp改成.hpp并且在.h的末尾要包含这个.hpp。
- `bridge.cpp`/`bridge.h`：一个Bridging-Header，起到C与C++之间的桥梁，将C++的一些操作封装为C函数，并在.h中以`extern "C"`声明给C语言调用的接口。
- `main.c`/`main.h`：C语言的主程序。
- 支持C和C++混编的一个简单的万能Makefile