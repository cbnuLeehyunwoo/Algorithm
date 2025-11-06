

fun plusAndReturnLast(a: Char, b: Char): Char {
    val sum = (a.digitToInt() + b.digitToInt()) % 10
    return ('0' + sum)
}

fun main() {
    val inputA = readln().trim()
    val inputB = readln().trim()
    var concateAB: String = ""
    for (i in inputA.indices) {
        val chars = listOf(inputA[i], inputB[i])
        concateAB += chars.joinToString("")
    }

    while (concateAB.length > 2) {
    val chars = mutableListOf<Char>()
        for (i in 0..concateAB.length-2) {
            chars.add(plusAndReturnLast(concateAB[i], concateAB[i + 1]))
        }
        concateAB = chars.joinToString("")
    }
    print(concateAB)
}