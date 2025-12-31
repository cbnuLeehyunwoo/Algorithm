fun main() {
    val seedMoney = readln().toInt()
    val machineDuckStockPrices = readln().split(" ").map { it.toInt() }
    val resJunhyun = buyAndPray(seedMoney, machineDuckStockPrices.toMutableList())
    val resSungmin = threeThree(seedMoney, machineDuckStockPrices.toMutableList())
    if (resSungmin > resJunhyun) print("TIMING")
    else if (resSungmin < resJunhyun) print("BNP")
    else print("SAMESAME")
}

fun buyAndPray(seed: Int, stockPrices: MutableList<Int>): Int {
    var currentSeed = seed
    var purchasedCount = 0

    for(price in stockPrices) {
        if (currentSeed >= price) {
            val purchaseResult = purchaseAll(currentSeed, price)
            purchasedCount = purchaseResult.first
            currentSeed = purchaseResult.second
        }
    }
    return purchasedCount * stockPrices.last() + currentSeed
}

fun threeThree(seed: Int, stockPrices: MutableList<Int>): Int {
    var currentSeed = seed
    var upStreak = 0
    var downStreak = 0
    var beforePrice = stockPrices.first()
    var purchasedCount = 0
    for (i in stockPrices.indices) {
        if (stockPrices[i] > beforePrice) {
            upStreak++
            downStreak = 0
        } else if (stockPrices[i] < beforePrice) {
            downStreak++
            upStreak = 0
        } else {
            upStreak = 0
            downStreak = 0
        }

        if (downStreak == 3) {
            val purchaseResult = purchaseAll(currentSeed, stockPrices[i])
            purchasedCount += purchaseResult.first
            currentSeed = purchaseResult.second
            downStreak = 2
        } else if (upStreak == 3) {
            val divestResult = divestAll(purchasedCount, stockPrices[i])
            currentSeed += divestResult
            purchasedCount = 0
            upStreak = 2
        }
        beforePrice = stockPrices[i]
    }
    return currentSeed + (purchasedCount * stockPrices.last())
}

fun purchaseAll(seed: Int, stockPrice: Int): Pair<Int, Int> {
    val buyCount = seed / stockPrice
    val resSeed = seed % stockPrice
    val purchaseResult = Pair(
        buyCount,
        resSeed
    )
    return purchaseResult
}

fun divestAll(purchasedCount: Int, stockPrice: Int) = purchasedCount * stockPrice