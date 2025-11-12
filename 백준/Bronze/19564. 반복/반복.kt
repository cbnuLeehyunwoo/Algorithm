fun main() {
    val input = readln()
    var result = 0
    var prev = 'z'

    for(c in input) {
        if(prev >= c) result++
        prev = c
    }
    println(result)
}