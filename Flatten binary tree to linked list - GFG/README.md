# Flatten binary tree to linked list
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree, flatten it into linked list in-place. Usage of auxiliary data structure is not allowed. After flattening, left of each node should point to NULL and right should contain next node in preorder.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
          1
        /   \
       2     5
      / \     \
     3   4     6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output :</strong>
1 2 3 4 5 6 
<strong style="user-select: auto;">Explanation: </strong>
After flattening, the tree looks 
like this
    1
     \
      2
       \
        3
         \
          4
           \
            5
             \
              6 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 2 3 4 5 6.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong>
        1
       / \
      3   4
         /
        2
         \
          5 
<strong style="user-select: auto;">Output :</strong> 
1 3 4 2 5  
<strong style="user-select: auto;">Explanation : </strong>
After flattening, the tree looks 
like this 
     1
      \
       3
        \
         4
          \
           2
            \ 
             5 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 3 4 2 5.</span></pre>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task:</span></strong></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is to complete the function flatten() which takes the root of the tree and flattens the tree into a linkes list without using any auxiliary space.</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note : The driver code&nbsp;prints the inorder traversal of the flattened binary tree.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(n)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints :</span></strong></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=n&lt;=10^5</span></div>

<div style="user-select: auto;">&nbsp;</div>
 <p style="user-select: auto;"></p>
            </div>