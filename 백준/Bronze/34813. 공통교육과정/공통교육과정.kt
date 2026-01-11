fun main() {
    val input = readln()
    val result = when (input.take(1)) {
        "F" -> "Foundation"
        "C" -> "Claves"
        "V" -> "Veritas"
        "E" -> "Exploration"
        else -> {}
    }
    print(result)
}