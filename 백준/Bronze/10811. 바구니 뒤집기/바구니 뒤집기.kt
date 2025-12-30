fun main() {
    val (n, m) = readln().split(" ").map { it.toInt() }

    val numList = MutableList(n) { it + 1 }

    repeat(m) {
        val (i, j) = readln().split(" ").map { it.toInt() }
        subListReverse(i, j, numList)
    }

    print(numList.joinToString(" "))
}

fun subListReverse(i: Int, j: Int, numList: MutableList<Int>) {
    for (idx in 0 until (j - i + 1) / 2) {
        swap(i - 1 + idx, j - 1 - idx, numList)
    }
}

fun swap(i: Int, j: Int, numList: MutableList<Int>) {
    val temp = numList[i]
    numList[i] = numList[j]
    numList[j] = temp
}
