#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Thomas";
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (in[]): %ld\n",
	 sizeof(areas));
  printf("The first area is %d, the 2nd %d.\n",
	 areas[0], areas[1]);
  printf("The size of char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n",
	 sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n",
	 sizeof(full_name));
  
  return 0;
}
