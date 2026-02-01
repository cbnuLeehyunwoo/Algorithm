fun main() {
    val n = readln().toInt()
    val map = mutableMapOf<String, Int>()

    repeat(n) {
        val (a, b) = readln().split(" ")
        map[a] = b.toInt()
    }
    println(map.maxBy {it.value}.key)
}