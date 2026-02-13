fun main() {
    val available = readln().split(" ").map { it.toInt() }
    val requested = readln().split(" ").map { it.toInt() }

    var result = 0
    for (i in 0..2) {
        result += maxOf(0, requested[i] - available[i])
    }

    println(result)
}
