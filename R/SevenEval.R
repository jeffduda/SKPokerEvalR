SevenEval <- function( hand ) {
  return(.Call("SevenEvalRcpp", hand, PACKAGE="SKPokerEvalR"))
}
