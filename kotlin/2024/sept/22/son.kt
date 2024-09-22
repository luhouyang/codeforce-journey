import java.util.Scanner
import kotlin.math.sqrt
import kotlin.math.floor
import kotlin.math.ceil

fun main() {
    val reader = Scanner(System.`in`)

    var t:Int = reader.nextInt()

    while (t-- > 0) {
        val n:Int = reader.nextInt()
        val ori_s:String = reader.next()

        val sr:Double = sqrt(n*1.0)

        if (ceil(sr) == floor(sr)) {
            var s:String = ""
            var edge_s:String = "1".repeat(sr.toInt())
            var fill_s:String = "1" + "0".repeat(sr.toInt() - 2) + "1"

            s += edge_s

            for (i in 1..(sr.toInt() - 2)) {
                s += fill_s
            }

            s += edge_s
            
            if (ori_s == s) {
                println("Yes")
            } else {
                println("No")
            }
        } else {
            println("No")
        }
    }
}