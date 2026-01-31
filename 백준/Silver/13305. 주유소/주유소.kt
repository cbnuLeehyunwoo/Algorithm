fun main() {
    val city = readln().toInt()
    val distanceBetweenCity = readln().split(" ").map { it.toLong() }
    val oilPrice = readln().split(" ").map { it.toLong() }

    var totalPay = 0L
    var currentMin = oilPrice.first()

    oilPrice.zip(distanceBetweenCity).forEach { (price, distance) ->
        if(price < currentMin) {
            currentMin = price
        }
        totalPay += currentMin * distance
    }

    print(totalPay)
}