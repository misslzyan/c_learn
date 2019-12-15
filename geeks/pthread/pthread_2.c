#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void  *run(void *a) {
  int * b = (int *)a;
  printf("%d\n", b[0] + b[1]);
  return NULL;
}

int main(){
  pthread_t thread_id;
  int a[2] = {1 ,2 };
  pthread_create(&thread_id, NULL, run,(void *) a);
  pthread_join(thread_id, NULL);
  return 0;
}
