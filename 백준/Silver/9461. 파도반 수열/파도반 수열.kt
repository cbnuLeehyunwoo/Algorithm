fun main() {
    val dp = LongArray(101)
    dp[1] = 1
    dp[2] = 1
    dp[3] = 1
    for (i in 4..100) {
        dp[i] = dp[i - 2] + dp[i - 3]
    }

    val caseNumber = readln().toInt()
    repeat(caseNumber) {
        val padoNumber = readln().toInt()
        println(dp[padoNumber])
    }
}