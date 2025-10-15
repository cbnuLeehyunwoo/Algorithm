fun main() {
    val (x, y, z) = readLine()!!.split(" ").map(String::toDouble)
    val (u, v, w) = readLine()!!.split(" ").map(String::toDouble)
    val buyCountOfX = u/100.0
    val buyCountOfY = v/50.0
    val buyCountOfZ = w/20.0

    var result =  x * buyCountOfX + y * buyCountOfY + z * buyCountOfZ
    print(result.toInt())
}
