###
 # @Author: Wang Zongwu
 # @Date: 2022-01-07 17:59:02
 # @LastEditTime: 2022-01-07 18:06:37
 # @LastEditors: Wang Zongwu
 # @Description: script for compile the project, and run google profiler
 # @FilePath: /gem5/root/Documents/CPP_Proj/SconsDemo/gprof.sh
 # @Mail: wangzongwu@sjtu.edu.cn
 # Please ask for permission before quote the code.
### 

# Brute clearing the build folder to initialize profiling, you can use "scons -c" also for remove only the scons target file
rm -r build
# Compile the project
scons
# Generate heap and cpu profile
cd ./build/Debug/
HEAPPROFILE=heapprof ./hello
pprof -pdf ./hello ./heapprof* > out_heapprof.pdf
CPUPROFILE=cpuprof.out CPUPROFILE_FREQUENCY=1000 ./hello
pprof -pdf ./hello ./cpuprof.out > out_cpuprof.pdf
