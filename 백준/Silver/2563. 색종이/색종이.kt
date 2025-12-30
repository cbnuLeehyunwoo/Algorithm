fun main() {
    var paper = Array(100) { IntArray(100) }
    var total = 0
    val n = readln().toInt()
    repeat(n) {
        val (a, b) = readln().split(" ").map { it.toInt() }
        for (i in b  until b + 10) {
            for (j in a  until a + 10) {
                paper[i][j] = 1
            }
        }
    }
    val flatPaper = paper.flatMap { it.toList() }
    flatPaper.forEach { if (it == 1) total++ }
    print(total)
}