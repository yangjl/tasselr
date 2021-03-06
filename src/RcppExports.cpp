// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// encodeNumAltAlleles
IntegerMatrix encodeNumAltAlleles(IntegerMatrix x, IntegerVector ref, IntegerVector alt);
RcppExport SEXP tasselr_encodeNumAltAlleles(SEXP xSEXP, SEXP refSEXP, SEXP altSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type ref(refSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type alt(altSEXP );
        IntegerMatrix __result = encodeNumAltAlleles(x, ref, alt);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
