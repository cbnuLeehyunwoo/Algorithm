fun main() {
    val groups = readln().split("-")

    var result = groups.first().split("+").sumOf { it.toInt() }
    val elseGroups = groups.drop(1)

    for(i in elseGroups.indices) {
        result -= elseGroups[i].split("+").sumOf { it.toInt() }
    }
    print(result)
}