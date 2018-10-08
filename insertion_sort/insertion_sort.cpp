#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

void insertion_sort(int* a,int size){
    for(int i=1;i<size;i++){
        int j=i;
        while(a[j]<a[j-1]&&j>0){
            swap(a[j],a[j-1]);
            j--;
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
    insertion_sort(a,x);
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
        }
    return 0;
    }