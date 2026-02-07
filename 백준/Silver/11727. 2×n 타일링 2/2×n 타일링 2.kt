fun main() {
    val n = readln().toInt()
    val MOD = 10007

    val dp = IntArray(n + 1)

    dp[1] = 1
    if (n >= 2) dp[2] = 3

    for (i in 3..n) {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD
    }

    println(dp[n])
}
