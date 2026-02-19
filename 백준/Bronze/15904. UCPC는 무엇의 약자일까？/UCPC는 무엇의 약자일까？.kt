fun main() {
    val input = readln()
    val target = "UCPC"
    
    var index = 0
    
    for (ch in input) {
        if (ch == target[index]) {
            index++
            if (index == target.length) break
        }
    }
    
    if (index == target.length) {
        println("I love UCPC")
    } else {
        println("I hate UCPC")
    }
}
