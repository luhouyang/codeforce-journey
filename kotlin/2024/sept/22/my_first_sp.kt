import java.util.Scanner
import kotlin.math.min
import kotlin.math.max

fun main() {
  val reader = Scanner(System.`in`)
  var t:Int = reader.nextInt()

  while (t-- > 0) {
    val x:Int = reader.nextInt()
    val y:Int = reader.nextInt()

    println(min(x, y).toString() + " " + max(x, y).toString())
  }
}  