fun main() {
    while (true) {
        val input = readln()
        val result = when (input) {
            "animal" -> "Panthera tigris"
            "tree" -> "Pinus densiflora"
            "flower" -> "Forsythia koreana"
            else -> input
        }
        if (result == "end") break;
        println(result)
    }
}