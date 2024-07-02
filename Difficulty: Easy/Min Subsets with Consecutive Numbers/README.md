<h2><a href="https://www.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers0601/1?page=3&difficulty%5B%5D=0&status%5B%5D=solved&category%5B%5D=Arrays&sortBy=submissions">Min Subsets with Consecutive Numbers</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px">Given an array of distinct positive numbers, the task is to calculate the&nbsp;minimum&nbsp;number of subsets (or subsequences) from the array such that each subset contains consecutive numbers.</span></span><br>
&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Example 1:</strong></span></span></p>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Input:</strong>
N = 10
Arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103} </span>
<span style="font-size:18px"><strong>Output:</strong>
3
<strong>Explanation:</strong>
{5, 6, 7}, { 56, 57, 58}, {100, 101, 102, 103} are
3 subset in which numbers are consecutive.</span></span></pre>

<p>&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Example 2:</strong></span></span></p>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Input:</strong>
N = 3
Arr[] = {10, 100, 105}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
{10}, {100} and {105} are 3 subset
in which numbers are consecutive.</span></span>
</pre>

<p>&nbsp;</p>

<p><br>
<span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>numofsubset()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the count of number of such subset's that&nbsp;contains consecutive numbers.</span></span><br>
<br>
&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N. log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ N≤ 10<sup>5</sup><br>
1 ≤ A[] ≤ 10<sup>5</sup></span></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;