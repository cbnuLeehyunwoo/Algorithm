fun main() {
    val n = readln().toInt()
    val list = List(n) {
        readln()
    }
    run {
        list.forEach {
            if (it == "yonsei") {
                print("Yonsei Won!")
                return@run
            }
            else if(it == "korea") {
                print("Yonsei Lost...")
                return@run
            }
        }
    }
}