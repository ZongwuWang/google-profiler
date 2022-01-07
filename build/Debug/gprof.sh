HEAPPROFILE=heapprof ./hello
pprof -pdf ./hello ./heapprof* > heapprof.pdf
#CPUPROFILE=cpuprof.out CPUPROFILE_FREQUENCY=1000 ./hello
#pprof -pdf ./hello ./cpuprof.out > cpuprof.pdf
