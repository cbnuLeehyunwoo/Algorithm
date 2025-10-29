fun main() {
    val inputString = readLine()!!
    if(inputString[0].digitToInt() + inputString[4].digitToInt() == inputString[8].digitToInt()) print("YES")
    else print("NO")
}