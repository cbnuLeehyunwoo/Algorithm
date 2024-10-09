fun main() {
    var n: Int? = 0
    n = readLine()?.toIntOrNull() ?: 0
    for(i in 1..n) {
        val lecture: String = readLine() ?: " "
        when(lecture) {
            "Algorithm" -> println("204")
            "DataAnalysis" -> println("207")
            "ArtificialIntelligence" -> println("302")
            "CyberSecurity" -> println("B101")
            "Network" -> println("303")
            "Startup" -> println("501")
            "TestStrategy" -> println("105")
        }
    }
}