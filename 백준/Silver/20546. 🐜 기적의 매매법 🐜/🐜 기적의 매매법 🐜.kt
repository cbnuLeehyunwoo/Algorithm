fun main() {
    val seedMoney = readln().toInt()
    val prices = readln().split(" ").map { it.toInt() }

    val junHyun = Trader(seedMoney)
    val sugMin = Trader(seedMoney)
    runBNP(junHyun, prices)
    runTiming(sugMin, prices)

    if(junHyun.totalAsset(prices.last()) > sugMin.totalAsset(prices.last()))
        print("BNP")
    else if(junHyun.totalAsset(prices.last()) < sugMin.totalAsset(prices.last()))
        print("TIMING")
    else print ("SAMESAME")
}

class Trader(
    seedMoney: Int,
) {
    var cash = seedMoney
    var stockCount = 0
    fun purchaseAll(stockPrice: Int) {
        stockCount += (cash / stockPrice)
        cash %= stockPrice
    }

    fun divestAll(stockPrice: Int) {
        cash += stockCount * stockPrice
        stockCount = 0
    }

    fun totalAsset(stockPrice: Int): Int {
        return cash + stockCount * stockPrice
    }
}

fun runBNP(trader: Trader, prices: List<Int>) {
    for(price in prices) {
        if (trader.cash >= price) {
            trader.purchaseAll(price)
        }
    }
}

fun runTiming(trader: Trader, prices: List<Int>) {
    var upStreak = 0
    var downStreak = 0
    var prevPrice = prices.first()
    for(price in prices) {
        when {
            price > prevPrice -> { upStreak++; downStreak = 0 }
            price < prevPrice -> { downStreak++; upStreak = 0 }
            else -> { upStreak = 0; downStreak = 0 }
        }
        if(downStreak == 3) {
            upStreak = 0
            downStreak = 2
            trader.purchaseAll(price)
        }
        else if(upStreak == 3) {
            downStreak = 0
            upStreak = 2
            trader.divestAll(price)
        }
        prevPrice = price
    }
}
