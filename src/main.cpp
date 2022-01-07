/*
 * @Author: Wang Zongwu
 * @Date: 2022-01-07 12:33:37
 * @LastEditTime: 2022-01-07 17:08:52
 * @LastEditors: Wang Zongwu
 * @Description: 
 * @FilePath: /gem5/root/Documents/CPP_Proj/SconsDemo/src/main.cpp
 * @Mail: wangzongwu@sjtu.edu.cn
 * Please ask for permission before quote the code.
 */

#include <iostream>
#include <gperftools/profiler.h>
#include <stdio.h>
#include <math.h>
using namespace std;

void bar()
{
        int a,b,c,d,j,k;
        a=0;
        int z=0;
        b = 1000;
        while(z < b)
        {
                while (a < b)
                {
                        d = sin(a);
                        c = cos(a);
                        j = tan(a);
                        k = tan(a);
                        k = d * c + j *k;
                        a++;
                }
                a = 0;
                z++;
        }
}

int fib(int n)
{
	if (n < 2)
	{
		return 1;
	} else
	{
		return fib(n-2) + fib(n-1);
	}
}

void fib_loop(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("fib(%d) = %d\n", i, fib(i));
	}
}

int main()
{
	ProfilerStart("./fib.prof");
	fib_loop(6);
	bar();
	cout << "Hello world!" << endl;
	ProfilerFlush();
	ProfilerStop();
	return 0;
}