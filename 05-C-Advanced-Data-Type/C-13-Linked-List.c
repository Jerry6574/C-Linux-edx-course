#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};

int main(void) {
	// populate linked list
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * ptr;
    
	// link nodes of linked list
    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;
    
    ptr = start;
	
	// print linked list nodes
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
	
	return 0;
}
