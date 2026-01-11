int count_char(const char *s, char c) {
  int count = 0;
  while (*s != '\0') { // or just *s
    if (*s == c)
      count++;
    s++;
  }
  return count;
}
