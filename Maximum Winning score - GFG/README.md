# Maximum Winning score
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In an online game, <strong style="user-select: auto;">N</strong> blocks are arranged in a hierarchical manner. All the blocks are connected together by a total of N-1 connections.&nbsp;Each block is given an ID from 1 to N. A block may be further connected to other blocks. Each block is also assigned a specific<strong style="user-select: auto;"> point value</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A player starts from Block 1. She must move forward from each block to a directly connected block until she reaches the final block, which has no further connection. When the player lands on a block, she <strong style="user-select: auto;">collects the point value</strong> of that block. The players score is calculated as the <strong style="user-select: auto;">product of point values</strong>&nbsp;that the player collects.<br style="user-select: auto;">
Find the maximum score a player can achieve.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>The answer can always be represented with 64 bits.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>     4
&nbsp;   / \
&nbsp;  2   8
&nbsp; / \ / \
&nbsp;2  1 3  4
<strong style="user-select: auto;">Output: </strong>128<strong style="user-select: auto;">
Explanation: </strong>Path in the given tree 
goes like 4, 8, 4 which gives the max
score of 4x8x4 = 128.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>     10
&nbsp;  /    \
&nbsp; 7      5
          \
           1
<strong style="user-select: auto;">Output: </strong>70<strong style="user-select: auto;">
Explanation: </strong>The path 10, 7 gives a 
score of 70 which is the maximum possible.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
You don't need to take input or print anything. Your task is to <strong style="user-select: auto;">complete </strong>the function&nbsp;<strong style="user-select: auto;">findMaxScore()&nbsp;</strong>that takes <strong style="user-select: auto;">root </strong>as input and returns max score possible.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<div style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤&nbsp;Number of nodes ≤&nbsp;10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1&nbsp;≤&nbsp;Data on node&nbsp;≤&nbsp;10 </span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">It is guaranteed that the answer will always fit in the 64-bit Integer</span></div>
 <p style="user-select: auto;"></p>
            </div>