int Dequeue(void) { 
    int pt = rear->data; 
    if (flag == 1) {
        printf("佇列是空的\n");
        exit(1);
    } else {
        if (front == rear) { 
            flag = 1;
            free(rear);
            front = rear = NULL; 
            return pt;
        } else { 
            Node *temp = rear;  
            rear = rear->prev;  
            free(temp);         
            if (rear != NULL) {
                rear->link = NULL; 
            }
            return pt;
        }
    }
}
