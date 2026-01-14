fun main() {
    val n = readln().toInt()
    val weightMap = mutableMapOf<Char, Int>()

    repeat(n) {
        val word = readln()
        val len = word.length

        word.forEachIndexed { idx, ch ->
            val weight = Math.pow(10.0, (len - idx - 1).toDouble()).toInt()
            weightMap[ch] = weightMap.getOrDefault(ch, 0) + weight
        }
    }

    val sortedWeights = weightMap.values.sortedDescending()

    var num = 9
    var sum = 0
    for (w in sortedWeights) {
        sum += w * num
        num--
    }

    println(sum)
}
