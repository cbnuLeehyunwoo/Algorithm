fun main() {
    val scores = readln()
        .split(" ")
        .map{ it.toInt() }
        .sorted()
        .drop(1)
        .sum()
    println("$scores")
}