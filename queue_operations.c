#include <stdio.h>

#define MAX_SIZE 100

// Structure representing a queue
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function prototypes
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue);
int isEmpty(Queue *queue);
void display(Queue *queue);

int main() {
    Queue queue;
    queue.front = -1;
    queue.rear = -1;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);

    printf("Queue elements: ");
    display(&queue);

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    printf("Queue elements after dequeue: ");
    display(&queue);

    return 0;
}

// Function to add an element to the queue
void enqueue(Queue *queue, int value) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
        printf("Enqueued %d successfully.\n", value);
    }
}

// Function to remove an element from the queue
int dequeue(Queue *queue) {
    int value;
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else {
        value = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        }
        return value;
    }
}

// Function to check if the queue is empty
int isEmpty(Queue *queue) {
    if (queue->rear == -1)
        return 1;
    else
        return 0;
}

// Function to display the queue
void display(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}