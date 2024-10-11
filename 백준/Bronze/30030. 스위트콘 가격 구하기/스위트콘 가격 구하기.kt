fun main() {
    var n: Int? = 0
    n = readlnOrNull()?.toIntOrNull() ?: 0
    val result = n * (10.0/11.0)
    println(result.toInt())
}