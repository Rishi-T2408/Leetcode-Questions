# BST to greater sum tree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a BST, transform it into greater sum tree where each node contains sum of all nodes greater than that node.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
           2
         /    \
        1      6
              /  \
             3    7
<strong style="user-select: auto;">Output:</strong> 18 16 13 7 0
<strong style="user-select: auto;">Explanation:</strong>
Every node is replaced with the 
sum of nodes greater than itself. 
The resultant tree is:
               16
             /    \
           18       7
                  /   \
                 13    0
</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong><strong style="user-select: auto;">:</strong>
</span><span style="font-size: 18px; user-select: auto;">          2
         /
        1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>2 0</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">The resultant tree is :</span>
<span style="font-size: 18px; user-select: auto;">             0</span>
<span style="font-size: 18px; user-select: auto;">            /</span>
<span style="font-size: 18px; user-select: auto;">          2</span>
</pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">transformTree() </strong>which takes the root of the tree as input and transforms the BST to a greater sum tree.</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note :</strong> The driver code prints the inorder traversal of the transformed BST.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N), N = number of nodes</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(N), N = number of nodes</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 10<sup style="user-select: auto;">4</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>