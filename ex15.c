#include <stdio.h>

void print_1(int a[], char *n[])
{
  int i = 0;
  int count = sizeof(a) / sizeof(int);
  
  for(i = 0; i <= count; i++) {
    printf("%d, %s\n", a[i], n[i]);
  }
  printf("---\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1, 2, 3};
  char *n[] = {
    "a", "b", "c"
  };
  int count = sizeof(a) / sizeof(int);
  
  print_1(a, n);

  int *cur_age = a;
  char **cur_name = n;

  int i = 0;
  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n",
	   *(cur_name+i), *(cur_age+i));
  }

  printf("---\n");

  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");
  
  return 0;
}
