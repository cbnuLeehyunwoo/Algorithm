fun main() {
        val n = readLine()!!.toInt()
        val strarr: MutableList<String> = mutableListOf()
        repeat(n) {
                val str = readLine()!!
                strarr += str
        }
        var cnt01OI = 0
        strarr.forEach() {
                if(it.contains("01") || it.contains("OI"))  cnt01OI++
        }
        print(cnt01OI)
}