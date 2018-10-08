#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
 
void shell_sort(int* a,int size)
{
    //int d, i, j, temp; //d为增量
    for(int d=size/2;d>=1;d =d/2) //增量递减到1使完成排序
    {
        for(int i=d;i<size;i++)   //插入排序的一轮
        {
            int temp = a[i];
            int j;
            for(j=i-d;(j>=0)&&(a[j]>temp);j=j-d)
            {
                a[j + d] = a[j];
            }
        a[j + d] = temp;
        }
    }
}

int main(){
    //int a[6]={44,5,3,2,6,17};
    int a[10]={0},x=0;
    string input;
    getline(cin,input);
    stringstream ss(input);
    while(ss>>a[x])x++;
    //heap_sort(a,x);
    //bubble_sort(a,x);
    //insertion_sort(a,x);
    shell_sort(a,x);
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
        }
    return 0;
    }