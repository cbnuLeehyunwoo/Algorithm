# [Bronze II] 강의실 예약 시스템 - 30019 

[문제 링크](https://www.acmicpc.net/problem/30019) 

### 성능 요약

메모리: 2804 KB, 시간: 68 ms

### 분류

그리디 알고리즘, 구현

### 제출 일자

2025년 3월 4일 20:56:22

### 문제 설명

<p>충남대학교 공대 5호관에는 $1$번부터 $N$번까지 번호가 매겨진 $N$개의 강의실이 있다. 학생들은 강의실 예약 시스템을 통해 원하는 강의실을 예약한 후에 이용할 수 있다. 강의실을 예약하기 위해서는 이용하려는 강의실의 번호 $k$와 이용 시작 시각과 끝 시각 $s,e$를 예약 시스템에 전송해야 한다.</p>

<p>어느 날, 예약 시스템에 $M$개의 예약 요청이 주어졌다. 예약 요청은 이용 시작 시각 $s$가 임박한 순으로 주어지고, 이용 시작 시각이 같은 예약은 없다. 예약 시스템은 예약 요청을 순서대로 확인하는데, 어떤 예약이 기존에 같은 강의실에 대해 수락한 예약과 겹치지 않는다면 그 예약을 수락하고 그렇지 않다면 거부한다. 단, 이용 끝 시각과 이용 시작 시각이 같은 두 예약은 겹친 것이 아니다.</p>

<p>$M$개의 예약 요청이 주어질 때, 강의실 예약 시스템이 각 예약 요청을 수락하는지 거부하는지 구해보자.</p>

### 입력 

 <p>첫째 줄에 정수 $N,M(1\le N,M\le 200\, 000)$이 주어진다.</p>

<p>둘째 줄부터 $M$개의 줄에 $i$번째 예약의 강의실 번호 $k_i(1\le k_i\le N)$와 이용 시작 시각과 끝 시각을 의미하는 정수 $s_i,e_i(1\le s_i<e_i\le 10^9)$가 주어진다. $M$개의 예약은 이용 시작 시각 $s$를 기준으로 오름차순으로 주어지며, 이용 시작 시각이 같은 예약은 주어지지 않는다.</p>

### 출력 

 <p>$M$개의 줄에 순서대로 각 예약 요청을 수락한다면 <span style="color:#e74c3c;"><code>YES</code></span>를, 거부한다면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력한다.</p>

