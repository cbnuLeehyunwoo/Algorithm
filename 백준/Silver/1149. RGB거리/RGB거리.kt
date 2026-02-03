import kotlin.math.min

fun main() {
    val n = readln().toInt()
    val costs = Array(n) { IntArray(3) }

    for (i in 0 until n) {
        val line = readln().split(" ").map { it.toInt() }
        costs[i][0] = line[0] // 빨강 비용
        costs[i][1] = line[1] // 초록 비용
        costs[i][2] = line[2] // 파랑 비용
    }

    // dp[i][0]: i번째 집까지 칠했고, i번째 집이 빨강일 때의 최소 누적 비용
    val dp = Array(n) { IntArray(3) }

    // 첫 번째 집 초기화
    dp[0][0] = costs[0][0]
    dp[0][1] = costs[0][1]
    dp[0][2] = costs[0][2]

    // 4. 바텀업 반복문 진행 (두 번째 집부터 끝까지)
    for (i in 1 until n) {
        // 현재 집(i)을 빨강으로 칠하려면, 이전 집(i-1)은 초록이나 파랑이어야 함
        dp[i][0] = costs[i][0] + min(dp[i-1][1], dp[i-1][2])

        // 현재 집(i)을 초록으로 칠하려면, 이전 집(i-1)은 빨강이나 파랑이어야 함
        dp[i][1] = costs[i][1] + min(dp[i-1][0], dp[i-1][2])

        // 현재 집(i)을 파랑으로 칠하려면, 이전 집(i-1)은 빨강이나 초록이어야 함
        dp[i][2] = costs[i][2] + min(dp[i-1][0], dp[i-1][1])
    }

    // 5. 마지막 집(n-1)에 저장된 값 중 최솟값 출력
    val result = min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]))
    println(result)
}