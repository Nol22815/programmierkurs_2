#define SIZE 2

int queue[SIZE] = {};
int head = 0;
int tail = -1;

int dequeue(){
  if(tail < head){
    return -1;
  }
  int temp = queue[head%SIZE];
  head++;
  return temp;
}

void enqueue(int i){
  if(tail < head){
    //queue ist leer
    queue[head%SIZE] = i;
    tail++;
  }else if(head%SIZE == (tail + 1) % SIZE){
    //q ist voll
    queue[tail%SIZE] = i;
  }else{
    tail++;
    queue[tail%SIZE] = i;
  }
}
