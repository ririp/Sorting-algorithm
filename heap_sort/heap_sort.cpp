#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
    
void heap_adjust(int *a,int index,int size){
    int left=index*2+1;
    int right=index*2+2;
    int maxid=index;    
    if(a[left]>a[maxid] && left<size)maxid=left;
    if(a[right]>a[maxid] && right<size)maxid=right;
    if(maxid!=index){
        swap(a[maxid],a[index]);
        heap_adjust(a,maxid,size);
        }
    }
void heap_build(int *a,int size){
    //int size=a.size();
    for(int i=size/2-1;i>=0;i--){
        heap_adjust(a,i,size);
        }
    }
    
void heap_sort(int* a,int size){
    //int i;
    heap_build(a,size);
    for(int i=size-1;i>=0;i--){
        swap(a[0],a[i]);
        heap_adjust(a,0,i);
        }
    }

int main(){
    //int a[6]={44,5,3,2,6,17};
    int a[10]={0},x=0;
    string input;
    getline(cin,input);
    stringstream ss(input);
    while(ss>>a[x])x++;
    heap_sort(a,x);
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
        }
    return 0;
    }