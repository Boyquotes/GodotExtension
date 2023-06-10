# C++项目模板  
## 开发环境  
Windows：CMake、MinGW(可选)、MSBuild  
Linux：CMake、GCC  
## 部署项目  
1.获取子模块  
```
git submodule update --init --recursive --remote --progress
```
2.获取包管理工具  
```
./vcpkg/bootstrap-vcpkg.bat
```
## 安装包  
### 安装vcpkg包  
MinGW：  
```
./vcpkg/vcpkg.exe install <包名> --triplet x64-mingw-static
```
Windows和Linux：  
```
./vcpkg/vcpkg.exe install <包名>
```
### 安装自定义包  
1.添加Git子模块  
```
git submodule add <Git仓库链接> ./pack/<仓库名>
```
2.构建子模块  
3.在./pack/目录下编写CMake包依赖配置文件  
4.在CMakeLists.txt中使用find_package()包含自定义包  
## 构建项目  
MinGW：  
1.生成项目  
```
cmake -Bbuild -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release -DVCPKG_TARGET_TRIPLET="x64-mingw-static"
```
2.编译项目  
```
cd ./build
mingw32-make
```
Windows：  
1.生成项目  
```
cmake -Bbuild -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
```
2.编译项目  
```
cd ./build
使用vs编译
```
Linux：  
1.生成项目  
```
cmake -Bbuild -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
```
2.编译项目  
```
cd ./build
make
```
