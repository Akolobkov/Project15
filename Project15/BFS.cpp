#include <stdio.h>
#include <stdbool.h>


struct Queue {
    int data[100];
    int front, rear;
};



void BFS(int graph[100][100], int vertices, int start, int output[100]) {
    Queue q;
    bool visited[100] = { false };
    int j = 0;
    q.front = -1;
    q.rear = -1;
    visited[start] = true;
    if (q.front == -1) {
        q.front = 0;
    }
    q.rear++;
    q.data[q.rear] = start;

    while (q.front != -1) {
        int value = q.data[q.front];
        if (q.front == q.rear) {
            q.front = q.rear = -1;
        }
        else {
            q.front++;
        }

        int currentVertex = value;
        output[j] = currentVertex;
        j++;
        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                if (q.front == -1) {
                    q.front = 0;
                }
                q.rear++;
                q.data[q.rear] = i;
            }
        }
    }
}
