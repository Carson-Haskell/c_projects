#include <stdio.h>
#include <string.h>

int main(void)
{
  const char name;

  printf("Name: ");
  scanf("%c", &name);

  for (int i = 0, n = strlen(name); i < name; i++)
  {
    printf("%d", name[i]);
  }
}
