#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void permute(char *str, int l, int r) {
  if (l == r) {
    printf("%s\n", str);
  } else {
    for (int i = l; i <= r; i++) {
      swap((str + l), (str + i));
      permute(str, l+1, r);
      swap((str + l), (str + i)); // backtrack
    }
  }
}

int main() {
  char str[] = "ABC";
  int n = strlen(str);

  printf("All permutations of %s are:\n", str);
  permute(str, 0, n-1);

  return 0;
}