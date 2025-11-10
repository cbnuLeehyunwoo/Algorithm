fun main() {
    val stringList = mutableListOf<String>()
    repeat(5) {
        val input = readln()
        stringList.add(input)
    }

    var result = ""
    repeat(stringList.maxOf { it.length }) {
        for (i in stringList.indices) {
            result += stringList[i].firstOrNull() ?: ""
            stringList[i] = stringList[i].drop(1)
        }
    }
    print(result)
}