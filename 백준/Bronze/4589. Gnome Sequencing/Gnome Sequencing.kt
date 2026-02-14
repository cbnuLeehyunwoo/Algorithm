fun main() {
    val n = readln().toInt()
    println("Gnomes:")

    repeat(n) {
        val (a, b, c) = readLine()!!.split(" ").map { it.toInt() }

        if ((a < b && b < c) || (a > b && b > c)) {
            println("Ordered")
        } else {
            println("Unordered")
        }
    }
}
