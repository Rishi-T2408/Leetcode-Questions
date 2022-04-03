# Find the Maximum Flow
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a graph with N vertices numbered 1 to N and M edges, The task is to find the max flow from vertex 1 to vertex N.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In a flow network, the maximum flow of a path can't exceed the flow-capacity of an edge in the path.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5, M =  4
Edges[]= { {1, 2, 1} , {3, 2, 2}, {4, 2, 3}, {2, 5, 5} }
<strong style="user-select: auto;">Output:</strong>
1 
<strong style="user-select: auto;">Explanation: </strong>
1 - 2 - 3
   / \
  4   5 
1 unit can flow from 1 -&gt; 2 - &gt;5 </span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4 , M = 4
Edges[] = { {1, 2, 8}, {1, 3, 10}, {4, 2, 2}, {3, 4, 3} }
<strong style="user-select: auto;">Output:</strong>
5 
<strong style="user-select: auto;">Explanation:</strong>
  1 - 2 
  |   |
  3 - 4
3 unit can flow from 1 -&gt; 3 -&gt; 4
2 unit can flow from 1 -&gt; 2 -&gt; 4
Total max flow from 1 to N = 3+2=5</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function<strong style="user-select: auto;">&nbsp;solve()</strong>&nbsp;which takes the <strong style="user-select: auto;">N&nbsp;</strong>(the number of vertices) ,<strong style="user-select: auto;">M </strong>(the number of Edges) and the array <strong style="user-select: auto;">Edges</strong>[]&nbsp;(Where Edges[i]&nbsp;denoting an undirected edge between&nbsp;Edges[i][0] and&nbsp;Edges[i][1]&nbsp;with a flow capacity of Edges[i][2]&nbsp;),&nbsp;and returns the&nbsp;integer&nbsp;denoting the maximum flow from 1 to N.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O( max_flow* M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N+M)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Where max_flow is the maximum flow from&nbsp;1 to N</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N,M,Edges[i][2] &lt;= 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= Edges[i][0],Edges[i][1] &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>