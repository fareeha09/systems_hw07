struct node { int i; struct node *next ;};
void print_list(struct node * pointer);
struct node * insert_front(struct node *n,int num );
struct node * free_list(struct node *n);
