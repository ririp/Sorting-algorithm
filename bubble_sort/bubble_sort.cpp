#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

void bubble_sort(int* a,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
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
    bubble_sort(a,x);
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
        }
    return 0;
    }