import kotlin.math.min

fun main() {
    val (a, b, c) = readln().split(" ").map { it.toLong() }
    print(min((b * c), (c * (b + 1) * (100 - a) * 0.01).toLong()))
}