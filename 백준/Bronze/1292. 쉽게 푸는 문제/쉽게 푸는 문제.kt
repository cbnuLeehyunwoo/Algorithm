fun main() {
    val (a, b) = readln().split(" ").map { it.toInt() }
    val easyList: MutableList<Int> = mutableListOf()
    for(i in 1..100) {
        repeat(i) { easyList.add(i) }
    }
    val sumFront = easyList.subList(0, a - 1).sum()
    val sumBack = easyList.subList(0, b).sum()
    print(sumBack - sumFront)
}

