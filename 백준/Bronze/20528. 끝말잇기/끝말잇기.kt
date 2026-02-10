fun main() {
    val n = readln().toInt()
    val words = readln().split(" ")

    val firstChar = words[0][0]

    for (i in 1 until n) {
        if (words[i][0] != firstChar) {
            println(0)
            return
        }
    }

    println(1)
}
