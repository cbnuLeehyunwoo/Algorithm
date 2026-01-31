fun main() {
    val city = readln().toInt()
    val distanceBetweenCity = readln().split(" ").map { it.toInt() }
    val oilPrice = readln().split(" ").map { it.toInt() }

    var totalPay = 0
    var currentMin = oilPrice.first()

    oilPrice.zip(distanceBetweenCity).forEach { (price, distance) ->
        if(price < currentMin) {
            currentMin = price
        }
        totalPay += currentMin * distance
    }

    print(totalPay)
}