import java.math.BigInteger

fun main() {
    val (number1, number2) = readln().split(" ")

    val sumA = number1.sumOf { it.digitToInt().toBigInteger() }
    val sumB = number2.sumOf { it.digitToInt().toBigInteger() }
    val result: BigInteger  = sumA * sumB
        print(sumA * sumB)
}