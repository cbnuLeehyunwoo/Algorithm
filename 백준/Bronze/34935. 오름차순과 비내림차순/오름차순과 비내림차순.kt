fun main() {
    val n = readln().toLong()
    val numbers = readln().split(" ").map { it.toLong() }

    val answer =
        if(numbers == numbers.sorted() && numbers.toSet().size == numbers.size) 1 else 0
    print(answer)
}