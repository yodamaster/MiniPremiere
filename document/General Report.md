# 项目报告

## 2018年袁昕老师短学期课程

## 1.项目需求与背景
见[需求文档](MiniPremiere/document/需求文档.md)

## 2.开发环境及工具
- 项目界面设计使用了Qt5.8
- 项目编写语言为C++
- 项目视频信息处理使用了OpenCV库
- 开发平台为GitHub
- 开发框架为MVVM框架
- 持续集成工具为AppVeyor

## 3.开发过程
本项目的开发进行了多轮的迭代，其中较为具有进程化的是三轮迭代。

第一轮迭代由邹家豪完成View层项目界面的初步设计，张云淞完成Model层视频信息处理的代码，刘洪甫完成开发平台的搭建与开发工具的选择与熟悉；

第二轮迭代更为全面地引入了MVVM框架，刘洪甫完成了APP层的统筹搭建及ViewModel层的构建工作（command的添加），张云淞完成了Model层与ViewModel层的通信工作与视频信息数据的封装与接口的设计，邹家豪完成了View层与ViewModel层的通信工作及相关命令（command）、参数包裹（parameter）的设计；

第三轮迭代主要是对整个项目进行优化，刘洪甫完成了配置AppVeyor持续集成环境以及代码仓库的管理，邹家豪和张云淞共同完成了界面的优化、项目架构的优化等一系列工作。

三轮迭代的过程中，我们小组分工明确、组织有序、具有较好开发效率。

# 4.项目目录
![](https://github.com/Waffle-Liu/MiniPremiere/raw/master/document/imgs_folder/J1.PNG)

![](https://github.com/Waffle-Liu/MiniPremiere/raw/master/document/imgs_folder/J2.PNG)

![](https://github.com/Waffle-Liu/MiniPremiere/raw/master/document/imgs_folder/J3.PNG)

![](https://github.com/Waffle-Liu/MiniPremiere/raw/master/document/imgs_folder/J4.PNG)

# 5.小组成员及分工

- 张云淞
  - 完成Model层视频信息处理的代码
  - 完成Model层与ViewModel层的通信工作
  - 视频信息数据的封装与接口的设计
  - 界面的优化、项目架构的优化
- 刘洪甫
  - 开发平台的搭建与开发工具的选择与熟悉
  - APP层的统筹搭建及ViewModel层的构建工作（command的添加）
  - 配置AppVeyor持续集成环境以及代码仓库的管理
- 邹家豪
  - 完成View层项目界面的初步设计
  - 完成View层与ViewModel层的通信工作
  - 相关命令（command）、参数包裹（parameter）的设计
  - 界面的优化、项目架构的优化
