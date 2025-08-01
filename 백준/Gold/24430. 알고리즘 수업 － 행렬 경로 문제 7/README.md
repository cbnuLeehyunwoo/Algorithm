# [Gold IV] 알고리즘 수업 - 행렬 경로 문제 7 - 24430 

[문제 링크](https://www.acmicpc.net/problem/24430) 

### 성능 요약

메모리: 17676 KB, 시간: 196 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2025년 6월 15일 01:44:19

### 문제 설명

<p>오늘도 서준이는 동적 프로그래밍 수업 조교를 하고 있다. 아빠가 수업한 내용을 학생들이 잘 이해했는지 문제를 통해서 확인해보자.</p>

<p>양의 정수로 이루어진 <em>n</em> × <em>n</em> 행렬 <em>m</em>이 주어진다. 행렬의 왼쪽 위에서 시작해 한 칸씩 이동해 오른쪽 아래까지 도달한다. 이 과정에서 방문한 칸에 있는 수들을 더한 값이 이 경로의 합이다. 이동 규칙은 다음과 같다.</p>

<ul>
	<li>오른쪽이나 아래쪽으로만 이동할 수 있다.</li>
	<li>왼쪽, 위쪽, 대각선 이동은 허용하지 않는다.</li>
</ul>

<p>행렬의 원소 (1, 1)에서 (<em>n</em>, <em>n</em>)으로 이동하는 모든 경로의 점수 중 가장 높은 점수를 구하는 행렬 경로 문제 의사코드는 아래와 같다. 출발 원소 (1, 1)에서 출발해서 도착 원소 (n, n)에 도달하는 가장 높은 점수와 가장 높은 점수의 경로 중 P개의 중간 원소를 최대한 많이 거치는 경우를 구해서 우리 서준이를 도와주자. 가장 높은 점수의 모든 경로가 중간 원소를 하나도 안 거칠 수도 있다.</p>

<p>행렬 경로 문제 동적 프로그래밍 의사 코드는 다음과 같다.</p>

<pre>matrix_path(m[][], n) {  # (1, 1)에서 (n, n)에 이르는 최고 점수를 구한다.
    for i <- 0 to n
        d[i, 0] <- 0;
    for j <- 1 to n
        d[0, j] <- 0;
    for i <- 1 to n
        for j <- 1 to n
            d[i, j] <- m<sub>ij</sub> + max(d[i - 1, j], d[i, j - 1]);
    return d[n, n];
}</pre>

### 입력 

 <p>첫째 줄에 행렬의 크기 <i>n</i>(5 ≤ <em>n</em> ≤ 1,000)이 주어진다.</p>

<p>그 다음 <em>n</em>개의 줄에는 각 줄마다 행렬의 각 행을 나타내는 <em>n</em>개의 정수가 한 개의 빈 칸을 사이에 두고 주어진다. 각 칸에 들어가는 값은 1 또는 2 이다. </p>

<p>그 다음 줄에 <em>P</em>가 주어진다. (1 ≤ <em>P</em> ≤ <em>n<sup>2</sup></em> - 2)</p>

<p>그 다음 <i>P</i>개의 줄에는 각 줄마다 서로 다른 중간 원소의 행 번호 <em>r<sub>i</sub></em>와<em> </em>열 번호 <em>c<sub>i</sub></em>가 주어진다.(1 ≤ <em>r<sub>i</sub>, c<sub>i</sub></em> ≤ <em>n</em>, (<em>r<sub>i</sub>, c<sub>i</sub></em>) ≠ (1, 1), (<em>r<sub>i</sub>, c<sub>i</sub></em>) ≠ (<em>n</em>, <em>n</em>))</p>

### 출력 

 <p>첫째 줄에 두 정수를 출력한다. 첫 번째 정수는 출발 원소 (1, 1)에서 출발해서 도착 원소 (<em>n</em>, <em>n</em>)에 도달하는 가장 높은 점수를 의미한다.</p>

<p>두 번째 정수는 가장 높은 점수의 경로에 포함된 중간 원소 개수의 최댓값을 의미한다. 가장 높은 점수의 모든 경로가 중간 원소를 하나도 안 거칠 경우 0을 출력한다.</p>

