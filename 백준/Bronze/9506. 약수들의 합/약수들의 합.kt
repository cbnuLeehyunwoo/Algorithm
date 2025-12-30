fun main() {
    while (true) {
        val input = readln().toInt()
        if (checkEnd(input)) return
        val measureList = getMeasureList(input)
        if (input == measureList.sum()) printPerfectNumber(input, measureList)
        else printNotPerfectNumber(input)
    }
}

fun checkEnd(input: Int) = if (input == -1) true else false

fun getMeasureList(input: Int): MutableList<Int> {
    val measureList = mutableListOf<Int>()
    for (i in 1..input) {
        if (input % i == 0) measureList.add(i)
    }
    return measureList.sorted().dropLast(1).toMutableList()
}

fun printPerfectNumber(input: Int, measureList: MutableList<Int>) {
    var resultString = ""
    resultString = measureList.joinToString(" + ")
    println("$input = $resultString")

}

fun printNotPerfectNumber(input: Int) {
    println ("$input is NOT perfect.")
}