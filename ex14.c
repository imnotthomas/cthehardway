#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(int str_len, char arg[]);

void print_args(int argc, char *argv[])
{
  int i =0;
  int str_len = 0;
  
  for(i = 0; i < argc; i++) {
    str_len = strlen(argv[i]);
    print_letters(str_len, argv[i]);
  }
}

void print_letters(int str_len, char arg[])
{
  int i = 0;

  for(i = 0; i < str_len; i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d", ch, ch);
    }
  }
  printf("\n");
}

int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_args(argc, argv);
  return 0;
}
