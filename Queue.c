#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct Queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct Queue *q,int val){
    if(isFull(q)){
        printf("This Queue is Full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("Enqued Element : %d \n",val);
    }
}

int dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("This Queue is Empty");
        return 0;
    }
    else{
       q-> f++;
       return q-> arr[q->f];
    }
}


int main(){
    struct Queue q;
    q.size=2;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size * sizeof(int));

    enqueue(&q,12);
    enqueue(&q,23);
    printf("Dequeue Element %d \n",dequeue(&q));
   
    if(isEmpty(&q)){
        printf("Queue is Empty");
    }

    if(isFull(&q)){
        printf("Queue is Full");
    }


    return 0;
}
