fun main() {
    val isGenerated = BooleanArray(10001)

    for (i in 1..10000) {
        val n = d(i)
        if (n <= 10000) {
            isGenerated[n] = true
        }
    }

    for (i in 1..10000) {
        if (!isGenerated[i]) {
            println(i)
        }
    }
}

fun d(n: Int): Int {
    var num = n
    var sum = n

    while (num > 0) {
        sum += num % 10
        num /= 10
    }
    return sum
}
