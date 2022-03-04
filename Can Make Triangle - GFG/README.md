# Can Make Triangle
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">A[]&nbsp;</strong>of&nbsp;<strong style="user-select: auto;">N&nbsp;</strong>elements, You'd like to know how many triangles can be formed with side lengths equal to adjacent elements from A[].</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Construct an array of integers of length N - 2 where ith element is equal to <strong style="user-select: auto;">1</strong> if it is possible to form a triangle with side lengths<strong style="user-select: auto;"> A[i]</strong>, <strong style="user-select: auto;">A[i+1]</strong>, and <strong style="user-select: auto;">A[i+2]</strong>. otherwise <strong style="user-select: auto;">0</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: </strong>A triangle can be formed with side lengths a, b and c if a+b&gt;c and a+c&gt;b and b+c&gt;a.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4
A[] = {1, 2, 2, 4}
<strong style="user-select: auto;">Output:</strong>
1 0
<strong style="user-select: auto;">Explanation:</strong>
output[0] = 1 because we can form a 
triangle with side lengths 1,2 and 2.
output[1] = 0 because 2+2<u style="user-select: auto;">&lt;</u>4 so, we cannot 
form a triangle with side lengths 2,2 and 4.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 5
A[] = {2, 10, 2, 10, 2}
<strong style="user-select: auto;">Output:</strong>
0 1 0
<strong style="user-select: auto;">Explanation:
</strong>output[0] = 0 because 2+2<u style="user-select: auto;">&lt;</u>10 so, we cannot
form a triangle with side lengths 2, 10 and 2.<strong style="user-select: auto;"> </strong>
output[1] = 1 we can form a triangle with 
side lengths 10,2 and 10.<strong style="user-select: auto;"> 
</strong>output[1] = 0 because 2+2<u style="user-select: auto;">&lt;</u>10 so, we can
form a triangle with side lengths 2, 10 and 2.<strong style="user-select: auto;"> </strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You dont need to read input or print anything. Your task is to c</span><span style="font-size: 18px; user-select: auto;">omplete the function&nbsp;<strong style="user-select: auto;">canMakeTriangle()&nbsp;</strong>which takes the array&nbsp;<strong style="user-select: auto;">A</strong>&nbsp;and the integer&nbsp;<strong style="user-select: auto;">N&nbsp;</strong>as the input parameters, and returns the array of answers.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
3 ≤ N&nbsp;≤ 10<sup style="user-select: auto;">5&nbsp;</sup><br style="user-select: auto;">
1 ≤ arr[i] ≤ 10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>