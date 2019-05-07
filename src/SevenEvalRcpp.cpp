#include "SevenEval.h"
#include "Rcpp.h"

RcppExport SEXP SevenEvalRcpp( SEXP hand_r ) {

  Rcpp::NumericVector hand( hand_r );

  uint16_t rank = SevenEval::GetRank(
    (uint8_t) hand[0],
    (uint8_t) hand[1],
    (uint8_t) hand[2],
    (uint8_t) hand[3],
    (uint8_t) hand[4],
    (uint8_t) hand[5],
    (uint8_t) hand[6] );

  return( Rcpp::wrap(rank) );

}
