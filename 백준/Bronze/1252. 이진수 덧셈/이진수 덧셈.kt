import java.math.BigInteger

fun main() {
    val (a, b) = readln().split(" ")
    val x = BigInteger(a, 2)
    val y = BigInteger(b, 2)
    println((x + y).toString(2))
}
