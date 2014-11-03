struct Node {
  struct Node *next;
  int key;
  int value;
};

extern struct Node *ListReverse(struct Node *node);

char *s = "foo bar" ;
float x;

int ListLenght(struct Node *node) {
  int i = 0;

  node = ListReverse(node);

  for (i = 0; node; node = node->next, i++);

  return i;
}
