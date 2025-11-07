import kotlin.math.round

fun main() {
    val t = readln().toInt()
    repeat(t) {
        val list = readln().split(" ").drop(1).map { it.toInt() }.toMutableList()
        val mean = list.sumOf { it } / list.size.toDouble()
        println(String.format("%.3f%%", getUnderMeanPercentage(mean, list)))
    }
}

fun getUnderMeanPercentage(mean: Double, list: MutableList<Int>): Double {
    var underNumber = 0
    list.forEach {
        if (it > mean) underNumber++
    }
    return round(underNumber / list.size.toDouble() * 100000) / 1000
}
