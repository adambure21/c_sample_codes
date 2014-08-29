struct node{
	int data;
	struct node *next;
};
typedef struct node node;

struct list{
	node *head;
};
typedef struct list list;

void init(list *l);
void insert(list *l,node *n);
node* createnode();
void display(list *l);
