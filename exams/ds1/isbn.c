#include "isbn.h"

int isISBNValid (char * isbn) {
  char c;
  int s1, s2, i, j;
  s1 = s2 = i = j = 0;
  while ((c = isbn[j++])) {
    if (c != '-') {
      if (c == 'X') {
        c = '9' + 1;
      }
      s1 += c - '0';
      s2 += s1;
      i++;
    }
  }
  return !(
    i == 10 && !(s2 % 11)
  );
}