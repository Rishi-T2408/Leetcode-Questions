# Populate Inorder Successor for all nodes
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree, write a function to populate next pointer for all nodes.&nbsp;The next pointer for every node should be set to point to inorder successor.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
</span>           <span style="font-size: 18px; user-select: auto;">10
&nbsp;      /  \
&nbsp;     8    12
&nbsp;    /
&nbsp;   3
&nbsp; </span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>3-&gt;8 8-&gt;10 10-&gt;12 12-&gt;-1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong>The inorder of the above tree is :</span>
<span style="font-size: 18px; user-select: auto;">3 8 10 12. So the next pointer of node 3 is </span>
<span style="font-size: 18px; user-select: auto;">pointing to 8 , next pointer of 8 is pointing
to 10 and so on.And next pointer of 12 is</span>
<span style="font-size: 18px; user-select: auto;">pointing to -1 as there is no inorder successor 
of 12.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
           <span style="font-size: 18px; user-select: auto;">1
&nbsp;     /   \
&nbsp;    2     3</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output: </span></strong><span style="font-size: 18px; user-select: auto;">2-&gt;1 1-&gt;3 3-&gt;-1 </span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You do not need to read input or print anything. Your task is to complete the function<strong style="user-select: auto;"> </strong><strong style="user-select: auto;">populateNext()&nbsp;</strong>that takes the root node of the binary tree as input parameter.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=n&lt;=10^5<br style="user-select: auto;">
1&lt;=data of the node&lt;=10^5</span></p>
 <p style="user-select: auto;"></p>
            </div>