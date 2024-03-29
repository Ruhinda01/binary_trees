# 0x1D. C - Binary trees

This is the group project that goes through the tree data structure called Binary trees fully implemented in C programming language. In this project I learnt how to design a binary tree data structure.

## Tasks

0. Write a function that creates a binary tree node

	* Prototype: `binary_tree_t *binary_tree_node*(binary_tree_t *parent, int value);`
	* Where parent is a pointer to the parent node of the node to create
	* And value is the value to put in the new node
	* When created, a node does not have any child
	* Your function must return a pointer to the new node, or `NULL` on failure

1. Write a function that inserts a node as the left-child of another node

	* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
	* Where parent is a pointer to the node to insert the left-child in
	* And value is the value to store in the new node
	* Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
	* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

2. Write a function that inserts a node as the right-child of another node

	* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
	* Where parent is a pointer to the node to insert the right-child in
	* And value is the value to store in the new node
	* Your function must return a pointer to the created node, or `NULL` on failure or if parent is `NULL`
	* If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

3. Write a function that deletes an entire binary tree

	* Prototype: `void binary_tree_delete(binary_tree_t *tree*);`
	* Where tree is a pointer to the root node of the tree to delete
	* If tree is `NULL`, do nothing

4. Write a function that checks if a node is a leaf

	* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node*);`
	* Where node is a pointer to the node to check
	* Your function must return 1 if node is a leaf, otherwise 0
	* If node is `NULL`, return 0

5. Write a function that checks if a given node is a root

	* Prototype: `int binary_tree_is_root(const binary_tree_t *node*);`
	* Where node is a pointer to the node to check
	* Your function must return 1 if node is a root, otherwise 0
	* If node is NULL, return 0

6. Write a function that goes through a binary tree using pre-order traversal

	* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
	* Where tree is a pointer to the root node of the tree to traverse
	* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If tree or func is NULL, do nothing

7. Write a function that goes through a binary tree using in-order traversal

	* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
	* Where tree is a pointer to the root node of the tree to traverse
	* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If tree or func is NULL, do nothing

8. Write a function that goes through a binary tree using post-order traversal

	* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
	* Where tree is a pointer to the root node of the tree to traverse
	* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If tree or func is NULL, do nothing

9. Write a function that measures the height of a binary tree

	* Prototype: `size_t binary_tree_height(const binary_tree_t *tree*);`
	* Where tree is a pointer to the root node of the tree to measure the height.
	* If tree is NULL, your function must return 0 

10. Write a function that measures the depth of a node in a binary tree

	* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree*);`
	* Where tree is a pointer to the node to measure the depth
	* If tree is NULL, your function must return 0

11. Write a function that measures the size of a binary tree

	* Prototype: `size_t binary_tree_size(const binary_tree_t *tree*);`
	* Where tree is a pointer to the root node of the tree to measure the size
	* If tree is NULL, the function must return 0

12. Write a function that counts the leaves in a binary tree

	* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree*);`
	* Where tree is a pointer to the root node of the tree to count the number of leaves
	* If tree is NULL, the function must return 0
	* A NULL pointer is not a leaf
