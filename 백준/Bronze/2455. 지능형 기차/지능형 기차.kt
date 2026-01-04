import kotlin.math.max

fun main() {
    var passenger = 0
    var maxPassenger = -1
    repeat(4) {
        val (pOut, pIn) = readln().split(" ").map { it.toInt() }
        passenger += (pIn - pOut)
        maxPassenger = max(passenger, maxPassenger)
    }
    print(maxPassenger)
}

class Train() {

}