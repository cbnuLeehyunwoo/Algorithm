fun main() {
        val map_x = mutableMapOf<Int, Int>()
        val map_y = mutableMapOf<Int, Int>()

        repeat(3) {
                val(x, y) = readLine()!!.split(' ').map(String::toInt)
                map_x[x] = map_x.getOrDefault(x, 0) + 1
                map_y[y] = map_y.getOrDefault(y, 0) + 1
        }
        map_x.forEach {(k, v) ->
                if(v == 1) print("$k ")
        }
        map_y.forEach {(k, v) ->
                if(v == 1) print("$k ")
        }
}
