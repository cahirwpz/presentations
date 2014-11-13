struct RT { /* Structure with complex types */
  char A;
  int B[10][20];
  char C;
};

struct ST {
  int X;
  double Y;
  struct RT Z; /* ST contains an instance of RT embedded in it */
};

int *foo(struct ST *s) {
  return &s[1].Z.B[5][13];
}
