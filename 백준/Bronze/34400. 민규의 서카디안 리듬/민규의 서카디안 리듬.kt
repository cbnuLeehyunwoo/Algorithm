fun main() {
    val case = readln().toInt()
    repeat(case) {
        val hour = readln().toInt()
        if(hour % 25 in 0..16) println("ONLINE")
        else println("OFFLINE")
    }
}