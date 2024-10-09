fun main() {
    var n: Int? = 0
    n = readlnOrNull()?.toIntOrNull() ?: 0
    if(620 <= n && n <= 780) {
        println("Red")
    }
    else if(n >= 590) {
        println("Orange")
    }
    else if(n >= 570) {
        println("Yellow")
    }
    else if(n >= 495) {
        println("Green")
    }
    else if(n >= 450) {
        println("Blue")
    }
    else if(n >= 425) {
        println("Indigo")
    }
    else if(n >= 380) {
        println("Violet")
    }
}