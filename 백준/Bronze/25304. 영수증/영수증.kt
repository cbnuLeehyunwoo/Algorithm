fun main() {
    val totalAmount = readln().toInt()
    val productType = readln().toInt()
    var calculatedAmount = 0
    repeat(productType) {
        val(productPrice, productNumber) = readln().split(" ").map { it.toInt() }
        calculatedAmount += productPrice * productNumber   
    }
    if(calculatedAmount == totalAmount) println("Yes") else println("No")
}