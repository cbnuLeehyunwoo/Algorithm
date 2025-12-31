import kotlin.math.pow

fun main() {
    val (inputNumber, formation) = readln()
        .split(" ")
    print(numberToTenFormation(inputNumber, formation))
}

fun numberToTenFormation(inputNumber: String, formation: String): Int {
    val str = inputNumber.toString()
    var totalNumber = 0;
    str.reversed().forEachIndexed { index, it ->
        val digits = (formation.toDouble()
            .pow(index.toDouble())).toInt()
        totalNumber += digits * charToTenFormation(it)
    }
    return totalNumber
}

fun charToTenFormation(inputChar: Char): Int {
    var index = 10
    for(c in 'A'..'Z') {
        if(c == inputChar) return index
        else index++
    }
    index = inputChar.digitToInt()
    return index
}