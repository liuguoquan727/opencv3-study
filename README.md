
# 编译

## 环境

* IDE：Clion 2017
* macOS Sierra

## 步骤

1. 下载[opencv-3.2.0.zip](http://opencv.org/opencv-3-2.html)
2. 解压
3. [cmake官网下载Mac安装包](https://cmake.org/download/)
4. 安装cmake
5. 打开cmake图形化界面，添加opencv解压路径为source code路径，其次指定build生成路径
6. 执行configure
7. 执行Generate
8. 切换到其次指定build生成目录下执行make install
9. 在clion工程CMakeLists.txt文件中配置

```
cmake_minimum_required(VERSION 3.8)
project(opencv)

include_directories( ${OpenCV_INCLUDE_DIRS} )

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)
find_package(OpenCV REQUIRED)
add_executable(工程名 ${SOURCE_FILES})
target_link_libraries( 工程名 ${OpenCV_LIBS} )
```

# 目录

## doc

>总结文档

## src

### tutorial

>OpenCV3编程入门书籍代码示例，文件名序号表示章节


# 参考资料

* [配置 opencv3](http://blog.csdn.net/lanchunhui/article/details/51541479)
* [OpenCV入门教程](http://blog.csdn.net/column/details/opencv-tutorial.html)
* [OpenCV学堂](http://blog.csdn.net/jia20003)
* [《OpenCV3编程入门》内容简介&勘误&配套源代码下载](https://github.com/QianMo/OpenCV3-Intro-Book-Src)
* OpenCV3编程入门_毛星云编著
