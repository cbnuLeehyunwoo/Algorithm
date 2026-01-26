import kotlin.math.max

fun main() {
    val (total, height, width) = readln().split(" ").map { it.toInt() }
    val result = max(height, total - height) * max(width, total - width) * 4
    print(result.toInt())
}