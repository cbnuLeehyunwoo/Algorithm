import kotlin.math.pow

fun main() {
    while (true) {
        val input = readln() ?: break
        val n = input.toDouble()

        if (n == 0.0) break

        val total = 1 + n + n.pow(2) + n.pow(3) + n.pow(4)
        println(String.format("%.2f", total))
    }
}
