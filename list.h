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
void insert(list *l,node *n);// By default add ay the end of the list
node* createnode();
void display(list *l);
void searchlist(list *l,int data);

void delete(list *l,int position);
