#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  //why am I skipping argv[0]?

  for(i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {"MS", "LA", "AL", "TX"};

  int num_states = 4;
  for(i = 1; i <= num_states; i++) {
    printf("state %d: %s\n", i, states[i-1]);
  }

  for(i = 0; i < 2; i++) {
    printf("s %d\n",states[0][i]);
  }

  return 0;
}
