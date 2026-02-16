fun main() {
    val m = readln().toInt()
    val n = readln().toInt()

    var minDecimal = 10_001
    var sumDecimal = 0
    for (i in m..n) {
        if(isPrimeNumber(i)) {
            sumDecimal += i
            if(minDecimal > i) {
                minDecimal = i
            }
        }
    }
    if(sumDecimal == 0) {
        println(-1)
        return
    }
    else {
        println(sumDecimal)
        print(minDecimal)
    }
}

fun isPrimeNumber(number: Int): Boolean {
    if(number == 1) return false
    if(number == 2) return true
    for(i in 2 until number) {
        if(number % i == 0) return false
    }
    return true
}
