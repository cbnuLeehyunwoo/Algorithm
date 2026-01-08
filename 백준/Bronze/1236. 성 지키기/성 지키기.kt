import kotlin.math.max

fun main() {
    val castle = mutableListOf<String>()
    val (row, col) = readln().split(" ").map { it.toInt() }
    var rowIssue = 0
    var colIssue = 0
    repeat(row) {
        val line = readln()
        if (!line.contains('X')) rowIssue++
        castle += line
    }
    for (i in 0..<col) {
        if(!castle.map { it[i] }.contains('X')) colIssue++
    }
    print(max(rowIssue, colIssue))
}