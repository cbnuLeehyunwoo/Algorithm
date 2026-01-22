fun main() {
    val s = readln().toInt()
    val m = readln().toInt()
    val l = readln().toInt()
    if(s + 2 * m + 3 * l >= 10) print("happy") else print("sad")
}