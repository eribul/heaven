// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// daysnonhosp
Rcpp::NumericVector daysnonhosp(Rcpp::NumericVector id, Rcpp::NumericVector pdate, Rcpp::NumericVector iddates, Rcpp::NumericVector inddto, Rcpp::NumericVector uddto);
RcppExport SEXP _heaven_daysnonhosp(SEXP idSEXP, SEXP pdateSEXP, SEXP iddatesSEXP, SEXP inddtoSEXP, SEXP uddtoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pdate(pdateSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type iddates(iddatesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type inddto(inddtoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type uddto(uddtoSEXP);
    rcpp_result_gen = Rcpp::wrap(daysnonhosp(id, pdate, iddates, inddto, uddto));
    return rcpp_result_gen;
END_RCPP
}
// innerprocess
Rcpp::List innerprocess(Rcpp::DataFrame dat, Rcpp::DataFrame admdat, Rcpp::List doses, NumericVector idunique, double N, double maxdepot, bool collapse);
RcppExport SEXP _heaven_innerprocess(SEXP datSEXP, SEXP admdatSEXP, SEXP dosesSEXP, SEXP iduniqueSEXP, SEXP NSEXP, SEXP maxdepotSEXP, SEXP collapseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type dat(datSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type admdat(admdatSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type doses(dosesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type idunique(iduniqueSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type maxdepot(maxdepotSEXP);
    Rcpp::traits::input_parameter< bool >::type collapse(collapseSEXP);
    rcpp_result_gen = Rcpp::wrap(innerprocess(dat, admdat, doses, idunique, N, maxdepot, collapse));
    return rcpp_result_gen;
END_RCPP
}
// Matcher
List Matcher(int Ncontrols, int Tcontrols, int Ncases, int reuseControls, IntegerVector controlIndex, IntegerVector caseIndex, IntegerVector controls, IntegerVector cases, int NoIndex);
RcppExport SEXP _heaven_Matcher(SEXP NcontrolsSEXP, SEXP TcontrolsSEXP, SEXP NcasesSEXP, SEXP reuseControlsSEXP, SEXP controlIndexSEXP, SEXP caseIndexSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP NoIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Ncontrols(NcontrolsSEXP);
    Rcpp::traits::input_parameter< int >::type Tcontrols(TcontrolsSEXP);
    Rcpp::traits::input_parameter< int >::type Ncases(NcasesSEXP);
    Rcpp::traits::input_parameter< int >::type reuseControls(reuseControlsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type controlIndex(controlIndexSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type caseIndex(caseIndexSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type controls(controlsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< int >::type NoIndex(NoIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(Matcher(Ncontrols, Tcontrols, Ncases, reuseControls, controlIndex, caseIndex, controls, cases, NoIndex));
    return rcpp_result_gen;
END_RCPP
}
// split2
DataFrame split2(IntegerVector pnr, IntegerVector inn, IntegerVector out, IntegerVector dato, IntegerVector dead);
RcppExport SEXP _heaven_split2(SEXP pnrSEXP, SEXP innSEXP, SEXP outSEXP, SEXP datoSEXP, SEXP deadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pnr(pnrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dato(datoSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dead(deadSEXP);
    rcpp_result_gen = Rcpp::wrap(split2(pnr, inn, out, dato, dead));
    return rcpp_result_gen;
END_RCPP
}
// splitDate
List splitDate(IntegerVector inn, IntegerVector out, IntegerVector event, IntegerVector mergevar, IntegerVector seq, IntegerVector varname);
RcppExport SEXP _heaven_splitDate(SEXP innSEXP, SEXP outSEXP, SEXP eventSEXP, SEXP mergevarSEXP, SEXP seqSEXP, SEXP varnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type event(eventSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mergevar(mergevarSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type varname(varnameSEXP);
    rcpp_result_gen = Rcpp::wrap(splitDate(inn, out, event, mergevar, seq, varname));
    return rcpp_result_gen;
END_RCPP
}
// splitFT
List splitFT(IntegerVector pnrnum, IntegerVector inn, IntegerVector out, IntegerVector event, IntegerVector mergevar, IntegerVector Spnrnum, std::vector<std::string> val, IntegerVector start, IntegerVector end);
RcppExport SEXP _heaven_splitFT(SEXP pnrnumSEXP, SEXP innSEXP, SEXP outSEXP, SEXP eventSEXP, SEXP mergevarSEXP, SEXP SpnrnumSEXP, SEXP valSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pnrnum(pnrnumSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type inn(innSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type event(eventSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mergevar(mergevarSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Spnrnum(SpnrnumSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type val(valSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(splitFT(pnrnum, inn, out, event, mergevar, Spnrnum, val, start, end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_heaven_daysnonhosp", (DL_FUNC) &_heaven_daysnonhosp, 5},
    {"_heaven_innerprocess", (DL_FUNC) &_heaven_innerprocess, 7},
    {"_heaven_Matcher", (DL_FUNC) &_heaven_Matcher, 9},
    {"_heaven_split2", (DL_FUNC) &_heaven_split2, 5},
    {"_heaven_splitDate", (DL_FUNC) &_heaven_splitDate, 6},
    {"_heaven_splitFT", (DL_FUNC) &_heaven_splitFT, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_heaven(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
