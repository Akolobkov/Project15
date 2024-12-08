#pragma once
#include "BFS.cpp"
#include "binsort.cpp"
#include "bubsort.cpp"
#include "CombSort.cpp"
#include "CountSort.cpp"
#include "DFS.cpp"
#include "heapSort.cpp"
#include "InsSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"
#include "SelSort.cpp"
#include "ShakerSort.cpp"
void BFS(int graph[100][100], int vertices, int start, int output[100]);
int binarySearch(int arr[], int left, int right, int x);
int bubsort(int n, int a[]);
void combSort(int arr[], int n);
void countSort(int arr[], int n);
void DFS(int graph[100][100], int vertices, int start, int check[100]);
void heapSort(int arr[], int n);
int inssort(int n, int a[]);
void twoPhase(const char* name);
void QuickSort(int a[], int low, int high);
int selsort(int n, int a[]);
void ShakeSort(int a[], int n);