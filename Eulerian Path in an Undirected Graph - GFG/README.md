# Eulerian Path in an Undirected Graph
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an adjacency matrix representation of an unweighted undirected graph named&nbsp;<strong style="user-select: auto;">graph</strong>, which has <strong style="user-select: auto;">N</strong> vertices. You have to find out if there is an <a href="https://en.wikipedia.org/wiki/Eulerian_path" target="_blank" style="user-select: auto;">eulerian path</a> present in the graph&nbsp;or not.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> The graph consists of a single component</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 5
graph = {{0, 1, 0, 0, 1}, 
&nbsp;        {1, 0, 1, 1, 0}, 
&nbsp;        {0, 1, 0, 1, 0}, 
&nbsp;        {0, 1, 1, 0, 0}, 
&nbsp;        {1, 0, 0, 0, 0}}
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explaination:</strong> There is an eulerian path. 
The path is 5-&gt;1-&gt;2-&gt;4-&gt;3-&gt;2.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 5
graph = {{0, 1, 0, 1, 1}, 
&nbsp;        {1, 0, 1, 0, 1}, 
&nbsp;        {0, 1, 0, 1, 1}, 
&nbsp;        {1, 1, 1, 0, 0}, 
&nbsp;        {1, 0, 1, 0, 0}}
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explaination:</strong> There is no eulerian path in 
the graph.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">eulerPath()</strong> which takes N and graph as input parameters and returns 1 if there is an eulerian path. Otherwise returns 0.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 50&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>