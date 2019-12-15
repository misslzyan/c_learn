#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int g = 0;

void *run(void *p) {
  sleep(4);
  g++;
  printf("%d %d\n",*(int*)p, g);
  return NULL;
}

int main(int argc, char **argv) {
  pthread_t thread_id;
  for(int i = 0;i<3;i++) {
    pthread_create(&thread_id, NULL, run,(void *) &thread_id);
  }
  pthread_exit(NULL);
  printf("done");
  return 0;
}
