fun main() {
    val n = readln().toInt()
    val arr = readln().split(" ").map { it.toInt() }

    var current = arr[0]
    var answer = arr[0]

    for (i in 1 until n) {
        current = maxOf(arr[i], current + arr[i])
        answer = maxOf(answer, current)
    }

    println(answer)
}