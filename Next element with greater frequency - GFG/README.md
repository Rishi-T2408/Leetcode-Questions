# Next element with greater frequency
##  Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">arr[ ]</strong>&nbsp;of&nbsp;<strong style="user-select: auto;">n</strong>&nbsp;integers, for every element, find the closest element on it's right that has a greater frequency than its own frequency.</span></p>

<blockquote style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Frequency is the number of times the&nbsp;element appears in the array.</span></p>
</blockquote>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 6
arr[] = {2 1 1 3 2 1}<strong style="user-select: auto;">
Output:</strong>
1 -1 -1 2 1 -1 
<strong style="user-select: auto;">Explanation:
</strong>1 appears 3 times.
2 appears 2 times.
3 appears 1 time. 

For arr[0] ie, 2
arr[1] ie 1 is the closest element on its 
right which has greater frequency than the 
frequency of 2. For the arr[1] and arr[2] no element 
on the right has greater frequency than 1, 
so -1 will be printed. and so on. </span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 11
arr[] = {10 5 1 2 3 2 5 5 4 5 2}
<strong style="user-select: auto;">Output:</strong>
-1 2 5 2 5 -1 -1 5 -1 -1</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
Your task is to complete the function&nbsp;<strong style="user-select: auto;">print_next_greater_freq() </strong>which take two parameters <strong style="user-select: auto;">arr</strong> and <strong style="user-select: auto;">n</strong>.This function returns&nbsp;answer(as a list of integers)&nbsp;as explained above.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity:</strong> O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected space complexity: </strong>O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;=&nbsp;10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>