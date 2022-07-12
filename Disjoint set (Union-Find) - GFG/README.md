# Disjoint set (Union-Find)
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[]</strong>&nbsp;that stores all number from <strong style="user-select: auto;">1</strong> to <strong style="user-select: auto;">N</strong> (both inclusive and sorted) and <strong style="user-select: auto;">K</strong>&nbsp;queries.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The task is to do the following operations on array elements :</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1.&nbsp;<strong style="user-select: auto;">UNION</strong>&nbsp;X Z :&nbsp;Perform&nbsp;union of <strong style="user-select: auto;">X</strong>&nbsp;and <strong style="user-select: auto;">Z</strong>&nbsp;i.e.&nbsp;parent of <strong style="user-select: auto;">Z</strong>&nbsp;will become the parent of <strong style="user-select: auto;">X</strong>.<br style="user-select: auto;">
2.&nbsp;<strong style="user-select: auto;">FIND</strong> X: Find the parent of <strong style="user-select: auto;">X</strong> and print it.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: Initially all are the parent of themselves.</span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5, K = 4
queries[] = {{find 4},
&nbsp;            {find 1},
&nbsp;            {unionSet 3 1},
&nbsp;            {find 3}}
<strong style="user-select: auto;">Output:</strong>
4 1 1
<strong style="user-select: auto;">Explanation:</strong>
1. The parent of 4 is 4. Hence the output is 4.
2. The parent of 1 is 1. Hence the output is 1.
3. After performing unionSet 3 1, parent of 3 becomes 1,
&nbsp;  since, parent of 1 is currently 1 itself.
4. The parent of 3 is now 1. Hence, the output is 1.
</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong>&nbsp;&nbsp;<br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the&nbsp;functions-&nbsp;<strong style="user-select: auto;">find</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes an array <strong style="user-select: auto;">A</strong>[]<strong style="user-select: auto;">&nbsp;</strong>and an integer <strong style="user-select: auto;">X </strong>as&nbsp;an input parameter and return the parent of&nbsp;<strong style="user-select: auto;">X&nbsp;</strong>and the function <strong style="user-select: auto;">unionSet()&nbsp;</strong>which takes an array <strong style="user-select: auto;">A</strong>[]<strong style="user-select: auto;">&nbsp;</strong>and two integers&nbsp;<strong style="user-select: auto;">X&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">Z&nbsp;</strong>and performs the <strong style="user-select: auto;">union</strong> of&nbsp;<strong style="user-select: auto;">X</strong>&nbsp;and <strong style="user-select: auto;">Z</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N, K&nbsp;&lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>