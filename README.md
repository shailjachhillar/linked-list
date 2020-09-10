# linked-list

we use array to store multiple data at the same time but we store data in continuous memory location what if we want to insert a new data in the array , it is not possible to do so without replacing the existing data.
now we want to insert a new data without replacing the old one. it is where the concept of linked list comes into frame.
structure is used in linked list.
linked list consist of node : node further has two parts -> data and link
link here contain the address of next node and points to it
struct node{
int num;
struct node*link;
(here link is a pointer and we know pointer points to the same data types i.e int pointer points to only an int value and float pointer points to a float value
similarly here link is made to point to a structure)
};
struct node*ptr;
(now we want a pointer that would point to the very first node thus we use this statement to store the address of the bery first node)
