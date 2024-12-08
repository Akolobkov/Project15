#define _CRT_SECURE_NO_WARNINGS
#define CATCH_CONFIG_MAIN
#include "Project15/everything.h"
#include "catch/catch.hpp"
TEST_CASE("BFS Traversal Test") {
    int graph[100][100] = {
      {0, 2, 1, 0},
      {2, 0, 0, 1},
      {1, 0, 0, 1},
      {0, 1, 1, 0}
    };
    int output[100];
    int vertices = 4;
    int start = 0;

    BFS(graph, vertices, start, output);
    int expected[100] = { 0, 2, 3, 1 };
    for (int i = 0; i<vertices; i++) {
        REQUIRE(output[i] == expected[i]);
    }
}
TEST_CASE("DFS Traversal Test") {
    int graph[100][100] = {
      {0, 2, 1, 0},
      {2, 0, 0, 1},
      {1, 0, 0, 1},
      {0, 1, 1, 0}
    };
    int output[100];
    int vertices = 4;
    int start = 0;

    DFS(graph, vertices, start, output);
    int expected[100] = { 0, 2, 3, 1 };
    for (int i = 0; i < vertices; i++) {
        REQUIRE(output[i] == expected[i]);
    }
}
TEST_CASE("Bubsort Test") {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = 7;
    bubsort(n, arr);
    for (int i = 0; i < n - 1; i++) {
        REQUIRE(arr[i] <= arr[i + 1]);
    }   int n2 = 5;
    int arr2[] = { 3, 7, 2, 9, 1 };
    bubsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }
    int arr3[] = { 1, 1, 1, 1, 1 };
    int n3 = 5;
    bubsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}
TEST_CASE("InsSort Test") {
    int arr1[] = { 7, 2, 5, 1, 8, 3 };
    int n1 = 6;
    inssort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, 3, 9, 2, 1 };
    int n2 = 5;
    inssort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 10, 5, -3, 6, 2, 1 };
    int n3 = 6;
    inssort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}
TEST_CASE("SelSort Test") {
    int arr1[] = { 7 };
    int n1 = 1;
    selsort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, 3, 9, 2, 1, -1, 10, 1777 };
    int n2 = 8;
    selsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { -10, -5, -3, -6, -2, -1 };
    int n3 = 6;
    selsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}

TEST_CASE("ShakeSort Test") {
    int a[] = { 4, 2, 7, 5, 3, 8, 0 };
    int n = 7;
    ShakeSort(a, n);
    int sortA[] = { 0, 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);

}
TEST_CASE("Quicksort test") {
    int unsorted[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { 11, 12, 22, 25, 34, 64, 90 };

    QuickSort(unsorted, 0, n - 1);
    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);
}
TEST_CASE("Binary Search Test") {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    REQUIRE(result == 3);
}
TEST_CASE("Combsort Test") {
    int a[] = { 4, 2, 7, 5, 3, 8, 0 };
    int n = 7;
    combSort(a, n);
    int sortA[] = { 0, 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);

}
TEST_CASE("Countsort Test") {
    int a[] = { 4, 2, 7, 5, 3, 8, 0 };
    int n = 7;
    countSort(a, n);
    int sortA[] = { 0, 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);
}
TEST_CASE("heapsort Test") {
    int a[] = { 4, 2, 7, 5, 3, 8, 0 };
    int n = 7;
    heapSort(a, n);
    int sortA[] = { 0, 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);
}
TEST_CASE("Testing twoPhase merge sort") {
    FILE* f = fopen("twoPhaseTest.txt", "w");
    int a[] = { 3, 2, 1, 67, 9, 0 };
    int b[] = { 0, 1, 2, 3, 9, 67 };
    for (int i = 0; i < 6; i++) {
        fprintf(f, "%d ", a[i]);
    }
    const char* name = "twoPhaseTest.txt";
    fclose(f);
    twoPhase(name);
    fclose(f);
    f = fopen("twoPhaseTest.txt", "r");
    int r = 0;
    int c;
    for (int i = 0; i < 6; i++) {
        fscanf(f, "%d ", &c);
        if (c != b[i])
            r = 1;
    }
    REQUIRE(r == 0);
}