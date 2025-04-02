rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
# 将库和头文件安装到系统目录（默认情况下，库会安装到 /usr/local/lib，头文件会安装到 /usr/local/include）
make install