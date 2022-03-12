# Check Mirror in N-ary tree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two <strong style="user-select: auto;">n</strong>-ary trees.&nbsp;Check if they are mirror images of each other or not. You are also given <strong style="user-select: auto;">e</strong> denoting the number of edges in both trees, and two arrays, <strong style="user-select: auto;">A[] </strong>and<strong style="user-select: auto;"> </strong><strong style="user-select: auto;">B[]</strong>. </span> <span style="font-size: 18px; user-select: auto;">Each array has&nbsp;2*e space separated values u,v denoting an edge from u to v for the both trees.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">n = </strong>3, <strong style="user-select: auto;">e = </strong>2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">B[] = </strong>{1, 3, 1, 2}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:
</strong>1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:
</strong></span>   <span style="font-size: 18px; user-select: auto;">1          1
 / \        /  \
2   3      3    2</span> 
<span style="font-size: 18px; user-select: auto;">As we can clearly see, the second tree
is mirror image of the first.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">n = </strong>3, <strong style="user-select: auto;">e = </strong>2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">B[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:
</strong>0</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:
</strong></span>   <span style="font-size: 18px; user-select: auto;">1          1
 / \        /  \
2   3      2    3</span> 
<span style="font-size: 18px; user-select: auto;">As we can clearly see, the second tree
isn't mirror image of the first.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">checkMirrorTree()</strong> which takes 2 Integers n, and e;&nbsp; and two arrays A[] and B[] of size 2*e as input and returns 1 if the trees are mirror images of each other and 0 if not.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= n,e &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>