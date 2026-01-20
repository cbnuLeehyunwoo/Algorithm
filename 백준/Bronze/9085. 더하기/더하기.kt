fun main() {
    val caseNumber = readln().toInt()
    repeat(caseNumber) {
        val arrayNumber = readln().toInt()
        val sum = readln().split(" ").sumOf { it.toInt() }
        println(sum)
    }
}