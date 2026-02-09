fun main() {
    val (D, H, M) = readln().split(" ").map { it.toInt() }

    val start = 11 * 24 * 60 + 11 * 60 + 11
    val end = D * 24 * 60 + H * 60 + M

    val result = end - start
    if (result < 0) {
        println(-1)
    } else {
        println(result)
    }
}
