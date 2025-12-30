fun main() {
    val (n, m) = readln().split(" ").map { it.toInt() }
    var bucket: MutableList<Int> = mutableListOf()
    for (i in 1..n) {
        bucket.add(i)
    }
    repeat(m) {
        val (i, j) = readln().split(" ").map { it.toInt() }
        bucket = swap(i - 1, j - 1, bucket)
    }
    print(bucket.joinToString(" "))
}

fun swap(i: Int, j: Int, numList: MutableList<Int>): MutableList<Int> {
    val temp = numList[i]
    numList[i] = numList[j]
    numList[j] = temp
    return numList
}