fun main() {
    val sequenceSize = readln().toInt()
    val sequence = readln().split(" ").map { it.toInt() }

    val dp = mutableListOf<Pair<Int, Int>>()
    dp.add(0 to 0) // 기저값 세팅

    for (i in sequence) {
        val maxLen = dp
            .filter { it.second < i }
            .maxOf { it.first }

        dp.add(maxLen + 1 to i)
    }

    println(dp.maxOf { it.first })
}
