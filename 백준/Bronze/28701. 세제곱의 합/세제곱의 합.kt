fun main() {
    var n: Int? = 0
    n = readlnOrNull()?.toIntOrNull() ?: 0
    var sum : Int = 0
    var result : Int = 0
    for(i in 1..n) {
        sum += i
        result += i*i*i
    }
    println(sum)
    println(sum * sum)
    println(result)
}