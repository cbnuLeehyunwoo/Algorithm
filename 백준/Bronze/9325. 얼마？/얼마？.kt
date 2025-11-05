fun main() {
    val test = readln().toInt()
    repeat(test) {
        var valueSum = 0
        val carValue = readln().toInt()
        val optionCount = readln().toInt()
        repeat(optionCount) {
            val (count, value) = readln().split(" ").map { it.toInt() }
            valueSum += (count * value)
        }
        println(carValue + valueSum)
    }
}