#ifndef BINARY_TREES_H_
#define BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/* macros */
#define MAX(X, Y) ((X) >= (Y) ? (X) : (Y))
#define ABS(X) ((X) < 0 ? (-(X)) : (X))


/*for the binary tree*/
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*for the BST*/
typedef struct binary_tree_s bst_t;

/*for the AVL tree*/
typedef struct binary_tree_s avl_t;

/*for the max binary heap*/
typedef struct binary_tree_s heap_t;

/*struct for breadth first traversal*/
/**
 * struct queue_s - struct for a tree linked list
 * @node: a binary_tree_t *
 * @next: pointer to the next value
 */
typedef struct queue_s
{
	binary_tree_t *node;
	struct queue_s *next;
} queue_t;

/* basic functions for queue */
/*queue_t *enqueue(queue_t **head, const binary_tree_t *node);
  binary_tree_t *dequeue(queue_t **head);*/

/*for printing purposes*/
void binary_tree_print(const binary_tree_t *root);

/*Question 0*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Question 1*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*Question 2*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*Question 3*/
void binary_tree_delete(binary_tree_t *tree);

/*Question 4*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*Question 5*/
int binary_tree_is_root(const binary_tree_t *node);

/*Question 6*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*Question 7*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*Question 8*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/*Question 9*/
size_t binary_tree_height(const binary_tree_t *tree);

/*Question 10*/
size_t binary_tree_depth(const binary_tree_t *node);

/*Question 11*/
size_t binary_tree_size(const binary_tree_t *tree);

/*Question 12*/
size_t binary_tree_leaves(const binary_tree_t *tree);

/*Question 13*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/*Question 14*/
int binary_tree_balance(const binary_tree_t *tree);

/*Question 15*/
int binary_tree_is_full(const binary_tree_t *tree);

/*Question 16*/
int binary_tree_is_perfect(const binary_tree_t *tree);

/*Question 17*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/*Question 18*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/*Question 19 or 100*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/*Question 20, file 101*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/*Question 21, file 102*/
int binary_tree_is_complete(const binary_tree_t *tree);

/*Question 22, file 103 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Question 23, file 104 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/*Question 24, file 105*/
int binary_tree_is_bst(const binary_tree_t *tree);

/*Question 25, file 111 */
bst_t *bst_insert(bst_t **tree, int value);

/*Question 26, file 112 */
bst_t *array_to_bst(int *array, size_t size);

/*Question 27, file 113 */
bst_t *bst_search(const bst_t *tree, int value);

/*Question 28, file 114 */
bst_t *bst_remove(bst_t *root, int value);

/*Question 30, file 120 */
int binary_tree_is_avl(const binary_tree_t *tree);

/*Question 31, file 121 */
avl_t *avl_insert(avl_t **tree, int value);

/*Question 32, file 122 */
avl_t *array_to_avl(int *array, size_t size);

/*Question 33, file 123 */
avl_t *avl_remove(avl_t *root, int value);

/*Question 34, file 124 */
avl_t *sorted_array_to_avl(int *array, size_t size);

/*Question 36, file 130 */
int binary_tree_is_heap(const binary_tree_t *tree);

/*Question 37, file 131 */
heap_t *heap_insert(heap_t **root, int value);

/*Question 38, file 132 */
heap_t *array_to_heap(int *array, size_t size);

/*Question 39, file 133 */
int heap_extract(heap_t **root);

/*Question 40, file 134 */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif
