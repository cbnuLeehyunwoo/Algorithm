fun main() {
    var input = readln()
    if (input.toInt() < 10) {
        input = productTen(input)
    }
    var cycle = 0
    var lastResult = input
    while (true) {
        val sum = (lastResult.sumOf { it.digitToInt() }).toString()
        val newResult = "${lastResult[1]}${sum.last()}"
        cycle++
        if (newResult == input) {
            println(cycle)
            break
        }
        lastResult = newResult
    }
}

fun productTen(input: String) = "0$input"