fun main() {
    val (n, m) = readln().split(" ").map { it.toInt() }
    var basckets = MutableList(n) { 0 }
    repeat(m) {
        val (i, j, k) = readln().split(" ").map { it.toInt() }
        for (ii in i..j) {
            basckets[ii - 1] = k
        }
    }
    basckets.forEach {
        print(it)
        print(" ")
    }

}