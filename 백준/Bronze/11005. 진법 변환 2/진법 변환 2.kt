fun main() {
    val (inputNumber, formation) = readln()
        .split(" ").map { it.toInt() }
    print(numbersToNFormation(inputNumber, formation))
}

fun numbersToNFormation(inputNumbers: Int, formation: Int): String {
    var totalRemain = ""
    var share = inputNumbers
    var remain = 0
    while (share != 0) {
        remain = share % formation
        share /= formation
        totalRemain += numberToNFormation(remain)
    }
    return totalRemain.reversed()
}

fun numberToNFormation(inputNumber: Int): Char {
    if(inputNumber < 10) return inputNumber.digitToChar()
    val baseChar = 'A'
    val resultCharCode = baseChar.code + (inputNumber - 10)
    return resultCharCode.toChar()
}