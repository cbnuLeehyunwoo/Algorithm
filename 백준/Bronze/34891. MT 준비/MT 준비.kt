import kotlin.math.ceil
import kotlin.math.floor

fun main() {
    val (a, b) = readln().split(" ").map { it.toInt() }
    print(ceil(a.toDouble() / b.toDouble()).toInt())
}