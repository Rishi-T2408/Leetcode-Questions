# Smallest Absolute Difference
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of size <strong style="user-select: auto;">N</strong> containing positive integers n and a number <strong style="user-select: auto;">k</strong>,The absolute difference between values at indices i and j is <strong style="user-select: auto;">|a[i] a[j]|</strong>. There are <strong style="user-select: auto;">n*(n-1)/2</strong> such pairs and you have to&nbsp;print the <strong style="user-select: auto;">k<sub style="user-select: auto;">th</sub></strong> <strong style="user-select: auto;">smallest</strong> <strong style="user-select: auto;">absolute</strong> <strong style="user-select: auto;">difference</strong> among all these pairs.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
N = 4
A[] = {1, 2, 3, 4}
k = 3<strong style="user-select: auto;">
Output : </strong>
1 <strong style="user-select: auto;">
Explanation :</strong>
The possible absolute differences are :
{1, 2, 3, 1, 2, 1}.
The 3rd smallest value among these is 1.</span></pre>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
N = 2
A[] = {10, 10}
k = 1
<strong style="user-select: auto;">Output :</strong>
0</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">kthDiff()</strong>&nbsp;which takes the array <strong style="user-select: auto;">A[]</strong>, its size <strong style="user-select: auto;">N </strong>and an integer <strong style="user-select: auto;">k </strong>as inputs and returns the <strong style="user-select: auto;">k<sub style="user-select: auto;">th</sub></strong> smallest absolute difference among all these pairs.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O( N. (Log(N))<sup style="user-select: auto;">2</sup> )<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(Log(N))</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N&lt;=10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&lt;=a[i]&lt;=10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= k &lt;= n*(n-1)/2</span></p>
 <p style="user-select: auto;"></p>
            </div>