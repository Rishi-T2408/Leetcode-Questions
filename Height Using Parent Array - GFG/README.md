# Height Using Parent Array
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a parent array <strong style="user-select: auto;">arr</strong>[] of a binary tree of <strong style="user-select: auto;">N</strong> nodes. Element at index i in the array arr[] represents the parent of ith node, i.e,&nbsp;<strong style="user-select: auto;">arr[i] = parent(i)</strong>. Find the height of this binary tree.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> There will be a node in the array arr[], where <strong style="user-select: auto;">arr[i] = -1</strong>, which means this node is the root of binary tree.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 7
arr = {-1, 0, 0, 1, 1, 3, 5}
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Tree formed is:
                    0
                   / \
                  1   2
                 / \
                3   4
               /
              5
             /
            6      Height of the tree= 5</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">findHeight()</strong> which takes N and arr[] as input parameters and returns the height of the given binary tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
0 ≤ arr[i] ≤ 10<sup style="user-select: auto;">4</sup>&nbsp; &nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>