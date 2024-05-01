#include<iostream>
#include<omp.h>
using namespace std;

int main(){
    #pragma omp parallel
    {
    cout<<"Hello World..."<<omp_get_thread_num()<<"\n";
    }
    return 0;
}