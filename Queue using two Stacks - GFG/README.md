# Queue using two Stacks
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Implement a Queue using 2 stacks<strong style="user-select: auto;"> s1</strong> and<strong style="user-select: auto;"> s2</strong> .<br style="user-select: auto;">
A Query <strong style="user-select: auto;">Q</strong> is of 2 Types<br style="user-select: auto;">
<strong style="user-select: auto;">(i)</strong> 1 x (a query of this type means&nbsp;&nbsp;pushing <strong style="user-select: auto;">'x'</strong> into the queue)<br style="user-select: auto;">
<strong style="user-select: auto;">(ii)</strong> 2 &nbsp; (a query of this type means to pop&nbsp;element from queue and print the poped element)</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">5
1 2 1 3 2 1 4 2

<strong style="user-select: auto;">Output: 
</strong>2&nbsp;3
<strong style="user-select: auto;">
Explanation: 
</strong>In the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2 &nbsp; poped element will be 2 the queue 
&nbsp;   will be {3}
1 4 the queue will be {3 4}
2 &nbsp; poped element will be 3.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">4
1 2 2 2 1 4

<strong style="user-select: auto;">Output: 
</strong>2&nbsp;-1
<strong style="user-select: auto;">
Explanation: 
</strong>In the second testcase&nbsp;
1 2&nbsp;the queue will be {2}
2&nbsp; &nbsp;poped element will be 2 and 
&nbsp;   then the queue will be empty
2&nbsp; &nbsp;the queue is empty and hence -1
1 4&nbsp;the queue will be {4}.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You are required to complete the two methods <strong style="user-select: auto;">push</strong> which take one argument an integer <strong style="user-select: auto;">'x'</strong>&nbsp;to be pushed into the queue and <strong style="user-select: auto;">pop</strong> which returns a integer&nbsp;poped out from other queue(-1 if the queue is empty).&nbsp;The <strong style="user-select: auto;">printing</strong> is done <strong style="user-select: auto;">automatically </strong>by the<strong style="user-select: auto;"> driver code</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(1) for&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;O(N) for&nbsp;<strong style="user-select: auto;">pop() </strong>or&nbsp;O(N) for&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;O(1) for&nbsp;<strong style="user-select: auto;">pop() </strong>&nbsp;<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space </strong>:&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=<strong style="user-select: auto;"> </strong>Q &lt;= 100<br style="user-select: auto;">
1 &lt;= x &lt;= 100</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note:The <strong style="user-select: auto;">Input/Ouput</strong> format and <strong style="user-select: auto;">Example</strong> given are used for system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>