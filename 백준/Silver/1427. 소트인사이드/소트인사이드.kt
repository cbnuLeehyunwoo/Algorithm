fun main() {
    val input = readln()
    val result = input
        .map { it.digitToInt() }
        .sortedDescending()
        .joinToString("")
    print(result)
}
