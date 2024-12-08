#include <stdio.h>
#include <iostream>
struct Stack {
    int data[100];
    int top;
};


void DFS(int graph[100][100], int vertices, int start, int check[100]) {
    bool visited[100] = { false };
    int j = 0;
    Stack s;
    s.top = -1;
    s.top++;
    s.data[s.top] = start;
    while (s.top != -1) {
        int currentVertex = s.data[s.top--];

        if (!visited[currentVertex]) {
            check[j] = currentVertex;
            j++;
            visited[currentVertex] = true;
        }

        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                s.top++;
                s.data[s.top] = i;
            }
        }
    }
}
