val wholePaper = Array(100) { IntArray(100) }

fun main() {
    var totalExtent = 0
    val partPaperNumber= readln().toInt()
    repeat(partPaperNumber) {
        val (startX, startY) = readln().split(" ").map { it.toInt() }
        fillPaper(startX, startY, 10)
    }
    val flattenPaper = wholePaper.flatMap { it.toList() }
    flattenPaper.forEach { if (it == 1) totalExtent++ }
    print(totalExtent)
}

fun fillPaper(startX: Int, startY: Int, step: Int): Unit {
    for(i in startX until startX + step) {
        for(j in startY until startY + step) {
            wholePaper[i][j] = 1
        }
    }
}