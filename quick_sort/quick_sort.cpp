#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

void quick_sort(int* a,int left,int right){
    if(left>=right)return;
    int first=left,last=right,key=a[first];
    while(first<last){
        while(first<last && a[last]>=key)last--;
        a[first]=a[last];
        while(first<last && a[first]<=key)first++;
        a[last] =a[first];
        }
        a[first]=key;
        quick_sort(a,left,first-1);
        quick_sort(a,first+1,right);
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
    //shell_sort(a,x);
    quick_sort(a,0,x-1);
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
        }
    return 0;
    }